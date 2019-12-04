def valid(board, row, column):
    initRow = row
    initCol = column

    if board[row][column] == 2:  # = 0 Not valid if [row,col] = hole
        return False

    col = 0
    while col < len(board):
        if board[row][col] == 1:
            return False
        col += 1

    while row >= 0 and column >= 0:
        if board[row][column] == 1:
            return False
        row -= 1
        column -= 1

    while initCol >= 0 and initRow < len(board):
        try:
            if board[initRow][initCol] == 1:
                return False
        except IndexError:
            pass
        initCol -= 1
        initRow += 1

    return True


def placeQueen(board, column):
    numSolution = 0

    if column == len(board):
        return 1

    for row in range(0, len(board)):
        if valid(board, row, column):
            board[row][column] = 1
            numSolution += placeQueen(board, column + 1)
            board[row][column] = 0

    return numSolution


def main():
    n, m = map(int, input().split())
    while m or n:

        board = [[0] * n for _ in range(n)]
        for _ in range(m):  # set up chess board and holes = 2
            x, y = map(int, input().split())
            board[x][y] = 2

        print(placeQueen(board, 0))
        n, m = map(int, input().split())


main()
