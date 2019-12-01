import sys
import math


def primeFactors(m):
    factor = dict()
    n = m
    while n % 2 == 0:
        factor[2] = factor.get(2, 0) + 1
        n = n / 2

    for i in range(3, int(math.sqrt(m)) + 1, 2):
        while n % i == 0:
            factor[i] = factor.get(i, 0) + 1
            n = n / i

    return factor


def get_powers(n, p):
    res = 0
    power = p
    while power <= n:
        res += n / power
        power *= p
    return math.ceil(res)


def fact(a, b):
    factor = primeFactors(b)
    divide = []

    if b == 0 or not factor:
        return False

    for key, value in factor.items():
        power = get_powers(a, key)
        if power >= value:
            divide.append(True)
        else:
            return False

    if all(divide):
        return True


for line in sys.stdin:
    try:
        s = line.split()
        num1 = int(s[0])
        num2 = int(s[1])
        if fact(num1, num2):
            print(f"{num2} divides {num1}!")
        else:
            print(f"{num2} does not divide {num1}!")
    except IndexError:
        break
