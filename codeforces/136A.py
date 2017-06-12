n = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
new_arr = [0]*n
for i in range(n):
	new_arr[arr[i]-1] = str(i+1)
print ' '.join(new_arr)

