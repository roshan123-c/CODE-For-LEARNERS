class Example:
    def fun1(self):
        x=10      #Local Variable
        print(x,"fun1 executed")
    def fun2(self):
        y=20      #Local Variable
        print(y,"fun2 executed")

t1=Example
t1.fun1(3)
t1.fun2(4)
