import math

for i in range(0, int(input())):
    line = input().split()

    v0 = float(line[0])
    omega = math.radians(float(line[1]))
    x = float(line[2])
    h1 = float(line[3]) + 1
    h2 = float(line[4]) - 1
    t = x / (v0 * math.cos(omega))
    print(t)
    y = v0 * t * math.sin(omega) - 4.905 * t*t
    print(y)
    if h1 <= y <= h2:
        print("Safe")
    else:
        print("Not safe")
