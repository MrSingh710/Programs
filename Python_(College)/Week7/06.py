import re
text = "Contact me at 9876543210 or +91-9876543210. Avoid 12345."
pattern = r'\+?\d{1,3}[-.\s]?\(?\d{3}\)?[-.\s]?\d{3}[-.\s]?\d{4}|\d{10}'
mobile_numbers = re.findall(pattern, text)

print("Mobile Numbers:", mobile_numbers)
