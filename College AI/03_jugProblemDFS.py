def water_jug_dfs(x, y, z, visited=set(), a=0, b=0, path=[]):
    if z > max(x, y):  
        return False  

    if a == z or b == z:  
        path.append((a, b))  
        print("Solution found with steps:")  
        for i, (j1, j2) in enumerate(path):  
            print(f"Step {i+1}: ({j1}, {j2})")  
        return True  

    if (a, b) in visited:  
        return False  

    visited.add((a, b))  
    path.append((a, b))  

    next_states = [  
        (x, b),  # Fill jug x  
        (a, y),  # Fill jug y  
        (0, b),  # Empty jug x  
        (a, 0),  # Empty jug y  
        (a - min(a, y - b), b + min(a, y - b)),  # Pour water from x to y  
        (a + min(b, x - a), b - min(b, x - a)),  # Pour water from y to x  
    ]  

    for state in next_states:  
        if water_jug_dfs(x, y, z, visited, *state, path[:]):  
            return True  

    return False  

# Example Input  
x = 4  
y = 3  
z = 2  

if not water_jug_dfs(x, y, z):  
    print(f"Not possible to measure {z} liters")  
