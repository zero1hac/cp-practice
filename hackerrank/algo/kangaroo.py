x1, v1, x2, v2 = map(int, raw_input().strip().split())

if v1==v2:
    print "NO"
elif (x1-x2)/(v2 - v1) <0:
    print "NO"
elif ((x1-x2)*1.0/(v2-v1)) - ((x1-x2)*1.0//(v2-v1)) > 0.01:
    print "NO"
else:
    print "YES"
