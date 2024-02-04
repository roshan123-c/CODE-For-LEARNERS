def avg(*runs,pn):    #Tuple Format Data
    s=0
    for i in runs:
        s=s+i
    print("Total Runs Made By",pn,"is",s)

avg(122,50,48,49,100,50,pn="Rohit Sharma")
avg(12,33,48,49,90,150,pn="Virat Kohli")
avg(12,33,46,9,9,0,pn="Hardik Pandya")
