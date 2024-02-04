#x,y=int(input("Enter first number:")),int(input("Enter second number:"))

x,y,z=input("Enter a date:").split('/')
print(x,y,z)

#a,b,c=[int(i) for i in input("Enter 3 numbers:").split()]

a,b,c=[eval(i) for i in input("Enter 3 numbers:").split()] #eval Function
print(type(a),type(b),type(c))

runs=list([eval(x) for x in input("Enter a data:").split()]) #For Find Average
s=0
for r in runs:
    s=s+r
print("Average is",s/len(runs))

d={x:input("Enter a value:") for x in range(3)} #Dictionary Type Data
print(d)

t=tuple([eval(g) for g in input().split()]) #Tuple Type Data
print(t)

d=dict(input().split('-') for i in range(3)) #Dictionary
print(d)

d={input("Enter a key:"):input("Enter a value:") for i in range(3)} #Dictionary
print(d)
print(type(k[0]),k)
