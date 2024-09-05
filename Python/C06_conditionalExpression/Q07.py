post = "There are many good programmers. Harry is one of them."

# if(post.find("Harry") == -1):
#     print("Post is not talking about Harry")

# else:
#     print("Post is talking about Harry")

if("Harry".lower() in post.lower()):       # lower() function converts the strings in lower cases
    print("Post is talking about Harry")

else:
    print("Post is not talking about Harry")