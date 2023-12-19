names = ["john", "sam", "rahul", "adil"]
for i in names:   # Syntax: loop (variable) in (listName):
    print(i)             #    function
    print('\n')
           # range(start(default=0), stop, step(default=1))
    for x in range(1, 5, 2):    # indentation matters (if this block starts from starting,
        print(names[x])                                    #   then output will be different)
    print('\n')
# while loop synatax:- 
# variable initialisation
# while(condition):    
# logic   
# increment/decrement           
y=0
while(y<len(names)):
    print(names[y])
    y=y+1