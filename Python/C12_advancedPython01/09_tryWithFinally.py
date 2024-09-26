def main():
    try:
        a = int(input("Hey, Enter a number: "))
        print(a)
        return

    except Exception as e:
        print(e)
        return

    finally:                            # if finally is not used, then this code is
        print("Inside finally block")   #  not executed as the function returns

main()  