cases = int(input())
line = input().split()
mysum = 0
ave = 0
for i in range(len(line)):
    num = int(line[i])
    if num >= 0:
        mysum += num
        ave += 1
print(mysum / ave)
