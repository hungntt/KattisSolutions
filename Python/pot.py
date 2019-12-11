import math
ans = 0
for _ in range(int(input())):
    n = int(input())
    power = n % 10
    n = int(n / 10)
    ans += int(math.pow(n, power))

print(ans)
