name = "Jassi"      # strings are immutable(strings' letters cannot be modified)

# slicing of strings
print("name[0:3] ->", name[0 : 3])   # character from 0 to 2 are printed (last index is excluded)

print("name[1] ->", name[1])    # 1st index character is assigned

# strings can be sliced by negative indices also (can be converted into positive index by 'length - negative index')
print("name[-4:-1] ->", name[-4 : -1])    # character from -4 to -2 are printed 

print("name[:3] ->", name[ : 3])      # by default, name[0 : length - 1] 
#1:24