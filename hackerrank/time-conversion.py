t = raw_input()
day =  t[-2:]
first = int(t[0:2])
if day=='PM' and first!=12:
    first+=12
    t = str(first)+t[2:-2]
elif day=='AM' and first==12:
    t = '00'+t[2:-2]
else:
    t = t[0:-2]
print t
