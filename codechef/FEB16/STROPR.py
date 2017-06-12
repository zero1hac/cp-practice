T = int(raw_input())
while T>0:
	NxM = map(int,raw_input().split(" "))
	arr = map(int, (raw_input().split(" "))[0:NxM[1]])
	x = NxM[1]
	sumi = arr[x-1]
	i=1
	M = NxM[2]
	while x-i-1>=0:
		sumi+= arr[x-i-1]*(M+i-1)
		i+=1
	print sumi
	print arr
	T-=1
