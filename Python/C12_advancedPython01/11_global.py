a = 7

def func():
    #global a    # Refers to global a(operations are done on global a not on local a)
    a = 3
    print(a)

func()
print(a)
