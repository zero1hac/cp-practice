T = int(raw_input().strip())
for a0 in range(T):
    n = int(raw_input().strip())
    k = 0
    arr = map(int, raw_input().strip().split())
    for i in range(n):
        k = k | arr[i]
    print k

