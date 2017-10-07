def check_average(arr, sim1):
    i = 0
    N = len(arr)
    j = N-1
    while i<j:
        if arr[i]+arr[j]==sim1:
            return 1
        elif arr[i]+arr[j]<sim1:
            i+=1
        else:
            j-=1
    return 0


N = int(raw_input().strip())
arr = []
i=0
while i<N:
    num = int(raw_input().strip())
    arr.append(num)
    i+=1
i=0
arr.sort()
count = 0
while i<N:
    count += check_average(arr, 2*arr[i])
    i+=1
print count
