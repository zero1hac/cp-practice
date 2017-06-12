T = int(raw_input())
while T>0:
	N = int(raw_input())
	a = map(int,raw_input().split(' '))
	sumi = 0
	curr = 0
	i = 0
	while i<N:
		if a[i]>curr:
			sumi+=a[i]-curr
			curr+=a[i]-curr
		else:
			curr-=curr-a[i]
		i+=1
	print sumi
	T-=1
