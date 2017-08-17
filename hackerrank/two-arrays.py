T = int(raw_input().strip())
for a0 in range(T):
    N, K = map(int, raw_input().strip().split())
    arr1 = map(int, raw_input().strip().split())
    #print arr1
    arr2 = map(int, raw_input().strip().split())
    arr1.sort()
    arr2.sort()
    arr2 = arr2[::-1]
    flag = 0
    for i in range(N):
        if arr1[i]+arr2[i]<K:
            flag=1
            break
    if not flag:
        print "YES"
    else:
        print "NO"
