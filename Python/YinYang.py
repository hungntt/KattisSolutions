string = input()
if len(string) % 2 != 0:
    print(0)
else:
    countW = 0
    countB = 0
    for i in string:
        if i == 'W':
            countW += 1
        else:
            countB += 1
    if countB == countW:
        print(1)
    else:
        print(0)
