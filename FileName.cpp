a, b, c = map(float, input("Введіть три числа: ").split())

positives = [x for x in (a, b, c) if x > 0]

suma = sum(positives)
serednie = suma / len(positives) if positives else 0

dobutok = 1
for x in positives:
    dobutok *= x
if not positives:
    dobutok = 0

print("Сума:", suma)
print("Середнє арифметичне:", serednie)
print("Добуток:", dobutok)
