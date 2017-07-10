N = int(raw_input().strip())
coins = [0, 0, 0]
arr = map(int, raw_input().strip().split())
j = 0
for i in range(len(arr)):
    if arr[i]==25:
        coins[0]+=1
    elif arr[i]==50:
        coins[1]+=1
        if coins[0]>0:
            coins[0]-=1
        else:
            break
    else:
        coins[2]+=1
        if coins[0]>0 and coins[1]>0:
            coins[0]-=1
            coins[1]-=1
        elif coins[0]>2:
            coins[0]-=3
        else:
            break
    j+=1
#print j
if j==N:
    print "YES"
else:
    print "NO"
