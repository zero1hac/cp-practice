n = int(raw_input())
curr = 0
max_curr = -1
for a0 in range(n):
	i,j = map(int, raw_input().strip().split())
	curr -=i
	curr+=j
	if curr>max_curr:
		max_curr = curr
print max_curr
