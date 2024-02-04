cb=20000
pin=1234

print("Current Balance Is:")
pn=int(input("Enter Your PIN:"))
if(pn==pin):
    wb=int(input("Enter Amount To Withdraw:"))
else:
    print("Incorrect PIN")
try:
    if cb<wb:
        raise ValueError()
    else:
        cb=cb-wb
        print("Transactoion Successfull")
        print("Current Balance",cb)
except ValueError:
        print("Insuffient Balance")
        print("Current Balance",cb)

