qaly = 0.0
for _ in range(int(input())):
    line = input()
    qual = line[0]
    year = line[1]
    string = qual + "*" + year
    qaly += eval(string)

print(qaly)
