import re
with open("College Python/Week7/text.txt", 'r') as file:
    text = file.read()

ip_pattern = r'\b(?:[0-9]{1,3}\.){3}[0-9]{1,3}\b'
ip_addresses = re.findall(ip_pattern, text)
valid_ips = [ip for ip in ip_addresses if all(0 <= int(part) <= 255 for part in ip.split('.'))]

print("Extracted IP Addresses:", valid_ips)