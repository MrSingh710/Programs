for i in range(2, 21):

    with open(f"C09_fileIO/Q03_MultiplicationTables/MulTableOf{i}.txt", "w") as f:

        for j in range(1, 11):

            f.write(f"{i} x {j} = {i * j}\n")
