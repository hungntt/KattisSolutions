operators = ['+', '-', '*', '//']

value = {}

for a in operators:
    for b in operators:
        for c in operators:
            val_str = f"4 {a} 4 {b} 4 {c} 4"
            val = eval(val_str)
            print(val_str, val)
            value[val] = val_str.replace('//', '/') + f" = {val}"

for i in range(0, int(input())):
    n = int(input())
    if n < -60 or n > 256 or n not in value:
        print("no solution")
    else:
        print(value[n])
