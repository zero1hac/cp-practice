y, k, n = map(int ,raw_input().strip().split())
count = 0
x = y+1
while x<n+1:
	if x%k==0:
		count+=1
		print x-y,
	x+=1

if count==0:
	print "-1"
