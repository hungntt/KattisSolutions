MAXN = 21

line1 = input().split()
n = int(line1[0])
m = int(line1[1])
E = [[] for i in range(0, 21)]
uzeo = [True] * 21


def cal(x):
    if x == n:
        return 1
    ret = cal(x + 1)

    check = True

    for v in E[x]:
        print("v, x: ", v, x)
        if uzeo[v]:
            check = False

    if check:
        print("x: ", x)
        uzeo[x] = True
        ret += cal(x + 1)
        uzeo[x] = False
        print("ret: ", ret)
    return ret


def main():
    for i in range(0, m):
        line = input().split()
        x = int(line[0])
        y = int(line[1])
        x -= 1
        y -= 1
        E[x].append(y)
        E[y].append(x)

    print(cal(0))


main()
