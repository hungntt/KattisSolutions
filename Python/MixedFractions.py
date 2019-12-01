while True:
    n1, n2 = input().split()
    n1 = int(n1)
    n2 = int(n2)

    if n1 == 0 or n2 == 0:
        break
    else:
        temp = int(n1 / n2)
        n1 = n1 - temp * n2
        print(f"{temp} {n1} / {n2}")
