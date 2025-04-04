import sys
import os
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.cm as cm


def split_uses(df):
    new_rows = []
    for opcode, users in zip(df['Opcode'], df['Users']):
        for user in [np.nan] if pd.isna(users) else users.strip(":").split(":"):
            new_rows.append({'Opcode': opcode, 'Users': user})

    return pd.DataFrame(new_rows)


def default_processing(df):
    df = df.groupby(['Opcode', 'Users'], dropna=False).size().reset_index(name='Count')
    df['str'] = df['Opcode'] + '->' + df['Users'].astype(str)
    df['Percent(%)'] = df['Count'] / df['Count'].sum() * 100
    
    return df


def no_nan_processing(df):
    df = df.groupby(['Opcode', 'Users'], dropna=True).size().reset_index(name='Count')
    df['str'] = df['Opcode'] + '->' + df['Users'].astype(str)
    df['Percent(%)'] = df['Count'] / df['Count'].sum() * 100
    
    return df


def get_colors(df):
    av = df['Percent(%)'].sort_values(ascending=False).iloc[3]
    normalized_percentages = df['Percent(%)'] / av
    
    return [cm.coolwarm(x) for x in normalized_percentages]


def draw_stat(df, name: str):
    plt.clf()
    colors = get_colors(df)
    
    plt.figure(figsize=(10, 5))
    plt.bar(df['str'], df['Percent(%)'], color=colors)
    plt.xticks(rotation=30, ha="right", fontsize=8)
    plt.subplots_adjust(bottom=0.3) 
    plt.xlabel("Instructions")
    plt.ylabel("Percent (%)")
    plt.title("Statistics")
    plt.xticks(rotation=45, ha="right")
    plt.savefig(name)
    
    print(f"Total for {name}: {df['Count'].sum()}")


artefacts_dir = sys.argv[1]
if not os.path.exists(artefacts_dir):
    print(f"Bad path to artefacts_dir: {artefacts_dir}")
    sys.exit(-1)
    

def stat_for_file(path: str, basename: str):
    df = pd.read_csv(os.path.join(artefacts_dir, path), encoding='utf-8')
    df = split_uses(df)

    draw_stat(default_processing(df), os.path.join(artefacts_dir, f"{basename}_all.png"))
    draw_stat(no_nan_processing(df), os.path.join(artefacts_dir, f"{basename}_no_nan.png"))

stat_for_file("static_stat.csv", "static")
stat_for_file("runtime_stat.csv", "runtime")
