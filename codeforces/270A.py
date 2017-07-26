T = int(raw_input().strip())

for a0 in range(T):
    angle = int(raw_input().strip())
    if 360 % (180 - angle) == 0:
        print "YES"
    else:
        print "NO"
