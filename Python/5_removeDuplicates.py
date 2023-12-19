# Remove duplicates from the list
names = ['john', 'sam', 'rahul', 'adil', 'pam', 'sam', 'sam']
count = 0 
x = 'sam'
for i in names:
    if i==x:
        count=count+1
    if count<=1:
        print(i)
print('\n')
names2 = ['john', 'rahul', 'sam', 'rahul', 'adil', 'pam', 'sam', 'sam']
c = 0
temp = 0
for i in range(len(names2)):
    for j in range(len(names2)):
        if i!=j:
            if names2[i]==names2[j]:
                c=1
                temp=1
                if temp==1:
                    print(i)