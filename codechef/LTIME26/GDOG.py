import sys
T = int(sys.stdin.readline())
while T>0:
	NK = map(int,sys.stdin.readline().split(" "))
	maxi = 0
	for i in range(1,NK[1]+1):
		coin = NK[0]%i
		if coin>maxi:
			maxi=coin
	print maxi
	T-=1
