from collections import OrderedDict
from itertools import groupby
import sys
n = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
res = ""
if n==1:
    print "YES"
    sys.exit()
for i in range(1, len(arr)):
    if arr[i] - arr[i-1] > 0:
        res += "A"
    elif arr[i] == arr[i-1]:
        res+="E"
    else:
        res+="D"
res = list(res)
t = "".join([x[0] for x in groupby(res)])

if t == "AED":
    print "YES"
elif t == "A":
    print "YES"
elif t == "E":
    print "YES"
elif t == "D":
    print "YES"
elif t == "AE":
    print "YES"
elif t == "ED":
    print "YES"
elif t == "AD":
    print "YES"
else:
    print "NO"

