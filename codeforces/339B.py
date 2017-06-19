N, M = map(int, raw_input().strip().split())

arr  = map(int, raw_input().strip().split())
curr_i = 1
count = 0
for i in range(M):
	if arr[i]==curr_i:
		continue
	elif arr[i]>curr_i:
		count+=(arr[i]-curr_i)
	else:
		count+=(N-curr_i+arr[i])
	curr_i = arr[i]
print count
