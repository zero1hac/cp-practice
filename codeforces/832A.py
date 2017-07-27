n, k = map(int, raw_input().strip().split())

p = n/k
if p%2==0:
    print "NO"
else:
    print "YES"
