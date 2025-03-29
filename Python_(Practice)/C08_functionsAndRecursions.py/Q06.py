def inches_to_cms(inches):
    cms = inches * 2.54
    return cms

inches = int(input("Enter inches: "))

print(f"{inches} inches = {inches_to_cms(inches)} cms")