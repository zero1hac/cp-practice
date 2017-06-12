n, k = map(int, raw_input().strip().split())
arr = map(int, raw_input().strip().split())
arr.sort()
count = 0
i=0
num_team_max = len(arr)/3
for a0 in range(num_team_max):
	if arr[i]+k<=5 and arr[i+1]+k<=5 and arr[i+2]+k<=5:
		count+=1
	i+=3
print count
