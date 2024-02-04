class Nokia1:
    x=2
    y=3
    def __init__(self):
     def fun1(self):
        print("fun1 executed")
class Nokia2(Nokia1):
    z=4
    def __init__(self):
     def fun2(self):
         super().__init__()
         #Nokia1.__init__(self)
         print("fun1 executed")

n1=Nokia2()
n1.fun1()
print(n1.x,n1.y,n1.z)
