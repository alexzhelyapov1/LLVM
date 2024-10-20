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


def no_nan_no_phi_processing(df):
    df = df[df['Users'] != 'phi']
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

df_static = pd.read_csv(os.path.join(artefacts_dir, "stat.csv"), encoding='utf-8')
df_static = split_uses(df_static)

draw_stat(default_processing(df_static), os.path.join(artefacts_dir, "statistics_all.png"))
draw_stat(no_nan_processing(df_static), os.path.join(artefacts_dir, "statistics_no_nan.png"))
draw_stat(no_nan_no_phi_processing(df_static), os.path.join(artefacts_dir, "statistics_no_nan_no_phi.png"))


df_runtime = pd.read_csv(os.path.join(artefacts_dir, "runtime_stat.csv"), encoding='utf-8')
df_runtime = split_uses(df_runtime)

draw_stat(default_processing(df_runtime), os.path.join(artefacts_dir, "statistics_all.png"))
draw_stat(no_nan_processing(df_runtime), os.path.join(artefacts_dir, "statistics_no_nan.png"))
draw_stat(no_nan_no_phi_processing(df_runtime), os.path.join(artefacts_dir, "statistics_no_nan_no_phi.png"))








# Вывод статистики
# print(df['Users'].isna())
# print(df[~df['Users'].isna()])





# Доступ к отдельным столбцам:
# print(df['Name'])

# Доступ к отдельным строкам:
# print(df.iloc[0]) # Первая строка

# Итерация по строкам:
# for index, row in df.iterrows():
#     print(row['Name'], row['Address'])

# if __name__ == "__main__":
#     print("main")