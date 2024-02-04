y=23         #Global Variable
class Test:
    def fun1(self):
        global y     #Update Value
        y=50
        x=5
        print(y)
    def fun2(self):
        y=78     #Same Name
        print(y)
        print("fun2:",globals()['y'])

t1=Test
t1.fun1(4)
t1.fun2(5)
