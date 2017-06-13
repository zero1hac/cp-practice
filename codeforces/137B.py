n = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
#arr.sort()
count = 0
count_arr = [0]*5001
for i in range(n):
	count_arr[arr[i]-1]+=1
print sum([1 if i==0 else 0 for i in  count_arr[:n]])
