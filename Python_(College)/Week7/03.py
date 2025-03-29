import re

with open("College Python/Week7/webpage.txt", "r") as file:
    lines = file.readlines()

script_lines = [line for line in lines if re.match(r'^\s*<script', line)]

print("Lines starting with <script> tag:-") 
for line in script_lines:
    print(line.strip())
