n1, n2 = map(int, input().split())
n3 = min(n1, n2)
n2 = max(n1, n2)
n3 += 1
n2 += 2
for i in range(n3, n2):
    print(i)
