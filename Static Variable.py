class Test:
    x=1             #Static Variable
    def __init__(self):
        Test.y=2    #Static Variable
    def fun1(self):
        Test.z=3    #Static Variable
    @staticmethod
    def fun2(self):
        test.w=4    #Static Variable
        print("Static Method")
    def fun3():
        Test.v=5    #Static Variable
        print("Static Method")
    @classmethod
    def fun4(cls):
        print("Class Method")
        cls=6        #Static Variable
        Test.t=7     #Static Variable

Test.p=8             #Static Variable
print(Test.p)
t1=Test()
t1.fun1
t1.fun2
Test.fun3()
Test.fun3()
print(Test.__dict__)
   
