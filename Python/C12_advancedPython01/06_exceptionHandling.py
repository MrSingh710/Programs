try:
    a = int(input("Hey, Enter a number: "))
    print(a)

except ValueError as v:
    print(v)
except TypeError as t:
    print(t)
except Exception as e:
    print(e)
except:
    print("Some error occured")

print("End")        # If exception handling is not used, then other 
                    # statements after crash statement does not get executed 