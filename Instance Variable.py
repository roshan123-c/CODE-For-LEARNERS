class Test:
    x=3        #Static Variable
    def fun1(self):
        y=2    #Instance Variable
        print(y,"fun1 executed")

t1=Test
t1.fun1(5)

