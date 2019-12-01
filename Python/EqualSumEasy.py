def subset_sum(lis, subset):
    s = 0
    i = 0
    while subset > 0:
        if (subset & 1) == 1:
            s += lis[i]
        i += 1
        subset >>= 1
    return s


def subset_as_list(lis, x):
    lst = []
    i = 0
    while x > 0:
        if x & 1 == 1:
            lst += [lis[i]]
        i += 1
        x >>= 1
    return lst


def test_case(tc):
    print(f"Case {tc}:")
    lis = list(map(int, input().split()))[1:]
    single = {a: b for b, a in enumerate(lis)}
    ss_map = {}

    for i in range(3, )