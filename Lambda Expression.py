r=lambda x,y:x+y
k=r(12,12)                  #ADDITION
print("Addition is",k)

g=lambda x,y:x if x>y else y      #MAX & MIN
m=g(97,44)
print("MAX Is",m)

r=lambda n:1 if n==1 else n*r(n-1)                           #FACTRORIAL
print("factrorial is",r(int(input("Enter A Number:"))))  
