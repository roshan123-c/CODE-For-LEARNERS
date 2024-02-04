try:
    print("Hallo")
    print(5/0)
except ValueError:
    print("Value Error")

except ZeroDivisionError:
    print("Don't Divide With 0")
else:
    print("Bye")
    
finally:
    print("Save")
       
        
    
