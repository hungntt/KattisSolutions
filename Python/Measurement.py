lis = [1, 1000, 12, 3, 22, 10, 8, 3]

dict = {
    'thou': 0, 'th': 0,
    'inch': 1, 'in': 1,
    'foot': 2, 'ft': 2,
    'yard': 3, 'yd': 3,
    'chain': 4, 'ch': 4,
    'furlong': 5, 'fur': 5,
    'mile': 6, 'mi': 6,
    'league': 7, 'lea': 7
}

s = input().split()

val = int(s[0])
f = dict[s[1]]
m = dict[s[3]]

if f == m:
    print(val)
elif f > m:
    while f != m:
        val = val * lis[f]
        f -= 1
    print(val)
elif f < m:
    while f != m:
        f += 1
        val = val / lis[f]
    print(val)
