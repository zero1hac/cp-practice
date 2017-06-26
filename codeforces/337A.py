n, m =map(int, raw_input().strip().split())
arr = map(int, raw_input().strip().split())
arr.sort()
#print arr[n-1] - arr[0] 
best = 1000000
for i in range(m-n+1):
	best = min(best, arr[i+n-1] - arr[i])
print best
