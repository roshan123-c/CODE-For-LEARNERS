pin=1234
cb=10000
while True:
    for i in range(3):
        p=int(input("Enter A Pin:-"))
        if p==pin:
              print("Correct Pin")
              print("choise Your Language")
              print("press 1 For English")
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
