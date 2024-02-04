'''def f1():
    print("Hallo")
    f1()
f1()'''

#FACTORIAL USING RECURTION......

def fact(n):
    if(n==1):
        return 1
    else:
        return n*fact(n-1)
#r=fact(5)
r=fact(int(input("Enter A Number:")))
print("Factrorial is",r) 


#ADDITION USING RECURTION......1 To 100

def fact(n):
    if(n==1):
        return 1
    else:
        return n+fact(n-1)

r=fact(10)
print("Addition Is",r)
