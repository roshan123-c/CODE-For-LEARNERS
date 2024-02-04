print("Hallo Friends")
try:
    x=int(input("Enter A Data:"))
    

except(ZeroDivisionError):
    print("ERROR 3")

except(ValueError):
    print("ERROR 4")

except(ZeroDivisionError,ValueError):
    print("ERROR 2")

except:
    print("ERROR 1")

a=5
b=0
try:
    c=a/b
except:
    print("can't Divide by 0")

