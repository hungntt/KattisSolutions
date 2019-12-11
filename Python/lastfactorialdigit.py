import math
for _ in range(int(input())):
    num = int(input())
    num = math.factorial(num)
    num %= 10
    print (num)
