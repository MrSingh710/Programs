import heapq

class Node:
    def __init__(self, mat, x, y, level, parent):
        self.mat = mat
        self.x = x
        self.y = y
        self.level = level
        self.parent = parent
        self.cost = float('inf')
    
    # Allow nodes to be compared based on total estimated cost.
    def __lt__(self, other):
        return (self.cost + self.level) < (other.cost + other.level)

def print_matrix(mat):
    for row in mat:
        print(" ".join(map(str, row)))

def calculate_cost(current, goal):
    cost = 0
    n = len(current)
    for i in range(n):
        for j in range(n):
            if current[i][j] and current[i][j] != goal[i][j]:
                cost += 1
    return cost

def print_path(node):
    # Build the path by iterating through parents.
    path = []0
    while node:
        path.append(node)
        node = node.parent
    for n in reversed(path):
        print_matrix(n.mat)
        print()

def solve(initial, x, y, goal):
    n = len(initial)
    moves = [(1, 0), (0, -1), (-1, 0), (0, 1)]
    
    root = Node(initial, x, y, 0, None)
    root.cost = calculate_cost(initial, goal)
    heap = [root]
    
    while heap:
        current = heapq.heappop(heap)
        if current.cost == 0:
            print_path(current)
            return
        for dx, dy in moves:
            new_x, new_y = current.x + dx, current.y + dy
            if 0 <= new_x < n and 0 <= new_y < n:
                new_mat = [row[:] for row in current.mat]
                # Swap blank (0) with adjacent element.
                new_mat[current.x][current.y], new_mat[new_x][new_y] = new_mat[new_x][new_y], new_mat[current.x][current.y]
                child = Node(new_mat, new_x, new_y, current.level + 1, current)
                child.cost = calculate_cost(child.mat, goal)
                heapq.heappush(heap, child)

if __name__ == '__main__':
    initial = [
        [1, 0, 2],
        [3, 4, 5],
        [6, 7, 8]
    ]
    goal = [
        [0, 1, 2],
        [3, 4, 5],
        [6, 7, 8]
    ]
    
    x, y = 0, 1  # Blank tile coordinates in initial configuration
    solve(initial, x, y, goal)
