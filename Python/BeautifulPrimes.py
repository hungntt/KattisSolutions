import math

import sympy as sy

cases = int(input())
for i in range(cases):
    total_num = int(input())

    digit = total_num
    arr = ["0"] * 1001
    arr[1] = "5"
    val = math.log10(5)
    for x in range(2, 1001):
        prime = sy.nextprime(x - 1 - val)
        val += math.log10(prime)
        arr[x] = arr[x - 1] + " " + str(prime)

    print(arr[total_num])
