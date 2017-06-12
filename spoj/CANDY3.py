T = int(raw_input())
while T>0:
	N = int(raw_input())
	K = N
	sumi=0
	while N>0:
		x = int(raw_input())
		sumi+=x
		N-=1
	if sumi%K==0:
		print "YES"
	else:
		print "NO"
	T-=1
