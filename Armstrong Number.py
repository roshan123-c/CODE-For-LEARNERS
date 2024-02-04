int=x,i,s,a,b
print("Armstrong Number Between 1 To 1000")
for i in 1000:
    i=x
    s=0
    while(x!=0):
        b=x%10
        s+=(b*b*b)
        x=x/10
    if(s==i):
        print(i)
    
