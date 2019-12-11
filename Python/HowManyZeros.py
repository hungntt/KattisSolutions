def countZerosUpTo(n):
    zeros = 0
    i = 1
    if n == 0:
        return zeros
    else:
        while i <= n:
            digit = int(n / i)
            print("Digit:", digit)
            sliceRight = int(n % i)
            print("R: ", sliceRight)
            sliceLeft = int(digit / 10)
            print("L: ", sliceLeft)
            digit = int(digit % 10)

            if sliceLeft == 0:
                print("0: ", zeros)
                return zeros

            if digit == 0:
                zeros += (sliceLeft - 1) * i + sliceRight + 1
                print("0: ", zeros)
            else:
                zeros += sliceLeft * i
                print("0: ", zeros)

            i *= 10


def countZeros(n):
    zeros = 0
    if n == 0:
        return 1

    while n > 0:
        if n % 10 == 0:
            zeros += 1
        n /= 10

    return zeros


while True:
    s = input().split()
    m = int(s[0])
    n = int(s[1])
    if m == -1 and n == -1:
        break
    else:
        zeros = countZeros(m)
        lower = countZerosUpTo(m)
        upper = countZerosUpTo(n)
        print(lower)
        print(upper)
        print(zeros + upper - lower)

