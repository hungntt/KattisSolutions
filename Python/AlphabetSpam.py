line = input()
countLine = len(line)
countBlank = 0
countLower = 0
countUpper = 0
countSymbol = 0
for i in line:
    if i == "_":
        countBlank += 1
    elif i.islower():
        countLower += 1
    elif i.isupper():
        countUpper += 1
    else:
        countSymbol += 1
print(f"{countBlank/countLine}")
print(f"{countLower/countLine}")
print(f"{countUpper/countLine}")
print(f"{countSymbol/countLine}")