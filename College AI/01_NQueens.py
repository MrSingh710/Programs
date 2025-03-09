def print_board(board, N):
    for row in board:
        print(" ".join(row))
    print("\n")

def is_safe(board, row, col, N):
    # Check column
    for i in range(row):
        if board[i][col] == "Q":
            return False
        
    # Check left diagonal
    i, j = row, col
    while i >= 0 and j >= 0:
        if board[i][j] == "Q":
            return False
        i -= 1
        j -= 1

    # Check right diagonal
    i, j = row, col
    while i >= 0 and j < N:
        if board[i][j] == "Q":
            return False
        i -= 1
        j += 1
    return True

def solve(board, row, N):
    if row == N: # All queens are placed
        print_board(board, N)
        return
    
    for col in range(N):
        if is_safe(board, row, col, N):
            board[row][col] = "Q" # Place Queen
            solve(board, row + 1, N) # Recur for next row
            board[row][col] = "." # Remove Queen (Backtrack)

def n_queens(N):
    board = [["."] * N for _ in range(N)] # Create NxN board
    solve(board, 0, N)

# Example: Solve for 4-Queens
n_queens(4)