N = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
arr.sort()
t = arr[0]
count1 = 0
saved1 = 0
for i in range(N):
    if arr[i] == t:
        saved1 = i
        count1+=1
    if arr[i] >t:
        break
count2 = 0
t = arr[N-1]
saved2 = N-1
for i in range(N)[::-1]:
    if arr[i] == t:
        saved2 = i
        count2+=1
    if arr[i] < t:
        break
if arr[N-1] - arr[0] == 0:
    print 0, count1*(count1 - 1)/2
else:
    print arr[N-1] - arr[0], count1*count2
