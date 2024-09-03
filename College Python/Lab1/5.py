# WAP that converts a given number of days into years and weeks.

days = int(input("Enter the days: "))

years = int(days / 365)
left = int(days % 365)

weeks = int(left / 7)

daysLeft = int(left % 7)


print(f"Converted years = {years}\nConverted weeks = {weeks}\nDays left = {daysLeft}")