def rem(list, word):
    list.remove(word)

    for item in range(len(l)):
        list[item] = list[item].strip(word) 

l = ["Jassia", "a", "aTable", "aBeda", "Rohanaa"]

rem(l, "a")

print(l)