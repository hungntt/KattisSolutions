cases = int(input())
for i in range(cases):
    rows, cols = input().split()
    rows = int(rows)
    cols = int(cols)
    chars = []
    for m in range(rows):
        chars.append(input()[::-1])
    print(f"Test {i + 1}")
    print('\n'.join(chars[::-1]))
