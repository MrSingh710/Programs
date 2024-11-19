for i in range(1, 4):
    try: 
        with open(f"Python/C12_advancedPython01/{i}.txt", "r") as f:
            print(f.read())

    except Exception as e:
        print(e)

print("Program didn't crashed")