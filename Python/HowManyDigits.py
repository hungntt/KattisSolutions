import math
import sys

digits = [0] * (10 ** 6 + 1)
maxi = 1

for n in sys.stdin:
    try:
        x = int(n)
        if digits[x] == 0:
            i = maxi
            while i < x + 1:
                digits[i] = digits[i - 1] + math.log10(i)
                i += 1
            maxi = i
        print((digits[x]))
    except ValueError:
        break
