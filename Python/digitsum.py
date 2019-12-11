memo = {}


def digitSum(n):
    dSum = 0
    while n > 0:
        dSum += n % 10
        n //= 10
    return dSum


def countUpTo(n):
    if n <= 0:
        return 0
    if n % 10 == 0:
        # 1+2+3+4+5+6+7+8+9 = 45
        # 10 -> 19 = 45 + 10 number 1
        # Ex: count(20) = 45 * 2 ( 2 times 1->9) + 10 * count(2) (actually = 1)(10 times number 1 from 10 to 19)
        ans = 10 * countUpTo(n // 10) + 45 * (n // 10)
        memo[n] = ans
        return ans
    ans = countUpTo(n - 1) + digitSum(n - 1)
    memo[n] = ans
    return ans


def main():
    cases = int(input())
    for _ in range(cases):
        a, b = map(int, input().split())
        print(countUpTo(b + 1) - countUpTo(a))
        print(memo)


main()
