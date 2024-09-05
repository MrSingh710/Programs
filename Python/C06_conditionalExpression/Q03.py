text = input("Enter a comment: ")

p1 = "Make a lot of money"
p2 = "buy now"
p3 = "subscribe this"
p4 = "click this"

# if(text.find(p1) == -1 and text.find(p2) == -1 and text.find(p3) == -1 and text.find(p4) == -1):
#     print("Comment is not a spam")

# else:
#     print("Comment is a spam")

if((p1 in text) or (p2 in text) or (p3 in text) or (p4 in text)):
    print("Comment is a spam")

else:
    print("Comment is not a spam")