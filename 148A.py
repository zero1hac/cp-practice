k = int(raw_input().strip())
l = int(raw_input().strip())
m = int(raw_input().strip())
n = int(raw_input().strip())
d = int(raw_input().strip())
arr = [0]*(d+1)
i = k
while i<=d:
	arr[i]+=1
	i+=k
i = l
while i<=d:
        arr[i]+=1
        i+=l
i = m
while i<=d:
        arr[i]+=1
        i+=m
i = n
while i<=d:
        arr[i]+=1
        i+=n
count = 0
for i in range(1,d+1):
	if arr[i]>0:
		count+=1
print count
