import re
text = "my email id is a.bc@gmail.com , but you can also contact me on the email x_yz@nitsri.ac.in"
pattern = r'[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}'
result = re.findall(pattern, text)
print("Emails found: ", result)