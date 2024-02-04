pin=1234
cb=10000
x=0
while x<4:
    x=x+1
    while True:
     for i in range(4):
         p=int(input("Enter A Pin:-"))
         if p==pin:
               print("Correct Pin")
               wb=int(input("Enter Amount:-"))
               if cb>=wb:
                   cb=cb-wb
                   print("Transaction Successful")
                   print("Money Withdrawan")
                   print("Current Balance is",cb)
               else:
                   print("Insufficient Balance")
                   break
         else:
             print("Incorrect Pin")
     else:
         print("Card Blocked")
