import math


def longSeq(seq, n):
    # pred[k]: stores index of predecessor of seq[k] lor lincsubseq ending at seq[k]
    pred = [None] * n
    # mem[k]: stores index k of smallest value seq[k] s.t. lincsubseq of len j ending at seq[k]
    mem = [None] * (n + 1)
    l = 0
    for i in range(0, n):
        # if l and seq[mem[l]] == seq[i]:
        #     continue
        lo = 1
        hi = l
        while lo <= hi:
            mid = math.ceil((lo + hi) / 2)
            if seq[mem[mid]] <= seq[i]:
                lo = mid + 1
            else:
                hi = mid - 1

        newL = lo
        mem[newL] = i
        pred[i] = mem[newL - 1]
        if newL > l:
            l = newL


    sol = [None] * l
    k = mem[l]

    for i in range(l - 1, -1, -1):
        sol[i] = k
        k = pred[k]

    return sol


def main():
    try:
        while True:
            num = int(input())
            seq = list()
            line = input().split()
            for j in range(num):
                seq.append(line[j])
            print(seq)
            sol = longSeq(seq, num)
            print(len(sol))
            print(' '.join([str(x) for x in sol]))

    except ValueError:
        pass


main()
