from collections import deque

def water_jug_bfs(x, y, z):
    if z > max(x, y):  # If z is greater than both jugs, it's impossible
        return "Not possible"

    visited = set()
    queue = deque([((0, 0), [])])  # (current state, path to state)

    while queue:
        (a, b), path = queue.popleft()

        if (a, b) in visited:
            continue

        visited.add((a, b))
        path = path + [(a, b)]

        if a == z or b == z:
            print("Solution found with steps:")
            print("• Initially, both jugs are empty (0, 0).")
            for i, (j1, j2) in enumerate(path):
                print(f"• Step {i}: ({j1}, {j2})")
            return "STOP! We found the Solution!"

        # Generate possible next states
        next_states = set()
        next_states.add(((x, b), f"Fill {x}-liter jug -> ({x}, {b})"))  # Fill first jug
        next_states.add(((a, y), f"Fill {y}-liter jug -> ({a}, {y})"))  # Fill second jug
        next_states.add(((0, b), f"Empty {x}-liter jug -> (0, {b})"))  # Empty first jug
        next_states.add(((a, 0), f"Empty {y}-liter jug -> ({a}, 0)"))  # Empty second jug

        # Pour water from first jug to second jug
        pour_a_to_b = min(a, y - b)
        next_states.add(((a - pour_a_to_b, b + pour_a_to_b), f"Pour from {x}-liter jug to {y}-liter jug -> ({a - pour_a_to_b}, {b + pour_a_to_b})"))

        # Pour water from second jug to first jug
        pour_b_to_a = min(b, x - a)
        next_states.add(((a + pour_b_to_a, b - pour_b_to_a), f"Pour from {y}-liter jug to {x}-liter jug -> ({a + pour_b_to_a}, {b - pour_b_to_a})"))

        for state, action in next_states:
            if state not in visited:
                queue.append((state, path + [state]))

    return "Not possible"

x = 3
y = 5
z = 4
print(water_jug_bfs(x, y, z))
