class Demo:
       def __init__(self,c,b):
        self.u=c
        self.v=b
       def fun1(self,g,h):
        print("Fun1 Executed")
        self.m=g
        self.n=h
       def fun2(Self):
        print("fun2 Executed")
       


g1=Demo(123,456)
g2=Demo(789,444)
print(g1.__dict__)
print(g2.__dict__)
'''z1=Demo()
z2=Demo()
z1.fun1(5,6)
z1.k=12
z1.l=13
print(z1.__dict__)
print(z2.__dict__)'''


        
