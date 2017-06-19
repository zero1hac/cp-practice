N = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
arr = sorted(arr)[::-1]
arr_sum = sum(arr)
forward_sum = 0
backward_sum = arr_sum
count = 0
for i in range(N):
	if forward_sum>backward_sum:
		break
	else:
		forward_sum += arr[i]
		backward_sum -= arr[i]
		count+=1
print count	
