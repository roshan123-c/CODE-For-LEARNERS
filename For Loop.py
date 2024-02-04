x="Amit"
for i in "Amit":
    print("Hallo")

x="Ajinkya"
for i in x:
    print(i)

x=[22,45,25,48,62,2,3,85,66,12]
for i in x:
    print(i)
    print(i*i)

for i in range(5):#range(stop)
    print(i)

for i in range(5,20):#range(start,stop)
    print(i)

for i in range(5,22,3):#range(start,stop,step)
    print(i)

#Factorial In Python
x=int(input("Enter A Number:-"))
s=1
for i in range(1,x+1):
    s=s*i
print("Factorial Is",s)
