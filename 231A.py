n = int(raw_input().strip())
count=0
for a0 in range(n):
	if sum([i for i in map(int, raw_input().strip().split())])>=2:
		count+=1
print count
