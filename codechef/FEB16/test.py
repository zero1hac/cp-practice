T = int(raw_input())
while T>0:
	N,X,M = map(int,raw_input().split())
	arr = map(int,raw_input().split())
	if N==1:
		print (arr[0]%(10**9+7))
	elif X==1:
		print (arr[0]%(10**9+7))
	else:

		if M > 10**6:
			print((arr[1]+arr[0]*M)%(10**9+7))
		else:
			for i in range(M):
				for j in range(1,X):
					arr[j] = arr[j] + arr[j-1]
			print (arr[X-1]%(10**9+7))
	T-=1 
