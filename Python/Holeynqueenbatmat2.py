def dfs(row, max):
    if row <= max:
        return
    for i in range(1, max):
        if avail(row, i):
            mark(row, i, true)
            dfs(row+1, max)
            mark(row, i, false)


