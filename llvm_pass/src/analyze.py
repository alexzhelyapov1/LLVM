import pandas as pd
import matplotlib.pyplot as plt
import matplotlib.cm as cm

df = pd.read_csv('../artefacts/stat.csv', encoding='utf-8')
print(df)
pair_counts = df.groupby(['Opcode', 'Users'], dropna=False).size().reset_index(name='Count')
pair_counts['str'] = pair_counts['Opcode'] + '->' + pair_counts['Users'].astype(str)
pair_counts['Percent(%)'] = pair_counts['Count'] / pair_counts['Count'].sum() * 100
pair_counts['Percent_str'] = pair_counts['Percent(%)'].map(lambda p: f'{p:.2f}%')
print(pair_counts)
total_pairs = pair_counts['Count'].sum()
print(f"Total: {total_pairs}")


plt.clf()

av = pair_counts['Percent(%)'].sort_values(ascending=False).iloc[3]
# print(pair_counts['Percent(%)'].sort_values())
normalized_percentages = pair_counts['Percent(%)'] / av
# print(normalized_percentages)

# Создаем цветовую карту от фиолетового к красному
# cm.
colors = [cm.coolwarm(x) for x in normalized_percentages]

plt.figure(figsize=(10, 5))
plt.bar(pair_counts['str'], pair_counts['Percent(%)'], color=colors)
plt.xticks(rotation=30, ha="right", fontsize=8)  # Уменьшаем размер шрифта
plt.subplots_adjust(bottom=0.3) 
plt.xlabel("Instructions")
plt.ylabel("Percent (%)")
plt.title("Stat")
plt.xticks(rotation=45, ha="right")
# plt.tight_layout()
plt.savefig("stat_all.png")

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