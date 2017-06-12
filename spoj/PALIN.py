T = int(raw_input())
def isPalin(n):
	if str(n)==str(n)[::-1]:
		return True
	else:
		return False
while T>0:
	N = int(raw_input())
	i = N+1
	while 1:
		if isPalin(i):
			print i
			break
		i+=1
	T-=1
		
