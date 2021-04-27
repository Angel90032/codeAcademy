
#overloading

def my_adder(a,b):
    
    if (type(a) is int) and (type(b) is int):
        c = a + b
        
    
    elif (type(a) is str) and (type(b) is str ):
        c = a + " " + b
        
    
    elif (type(a) is int) and (type(b) is str):
        
        c = a * b
        
    return c
    


print(my_adder(10, 5))
print(my_adder("Hello","there"))
print(my_adder(3,"GO!"))
