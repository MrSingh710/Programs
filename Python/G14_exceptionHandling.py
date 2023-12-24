try:
    num1 = int(input("Enter number 1: "))
    num2 = int(input("Enter number 2: "))
    div = num1/num2
    print("Result is", div)
#except(ValueError, ZeroDivisionError):
#   print("Please enter valid value")
except ZeroDivisionError:        # ZeroDivisionError is an exception class error which occurs when we try to divide something by zero
    print("You cannot divide by zero")
except ValueError:
    print("Please enter only integers")
except Exception:                # Exception is a SUPER class where all types of errors are there
    print("Something went wrong")
#except:
#    print("Error occured")
finally:                         # finally is optional but is a good practice as it excutes everytime whether exception occurs or not
    print("Closing all the connections")
print("Program ended")
print("Thanks for using the services")