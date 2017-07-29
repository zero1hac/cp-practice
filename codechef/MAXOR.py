T = int(raw_input().strip())
for a in range(T):
    N = int(raw_input().strip())
    arr = map(int, raw_input().strip().split())
    count = 0
    for i in range(N-1):
        for j in range(i+1, N):
            print arr[i]|arr[j], " ", max(arr[i], arr[j]), bin(arr[i]), bin(arr[j]), bin(arr[i]|arr[j])
            if (arr[i] | arr[j])<=max(arr[i], arr[j]):
                count+=1
    print count
