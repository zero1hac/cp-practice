#Dushyant Mishra
#zeroonehacker
#Mathematics and Computing 
#IIT BHU Varanasi
T = int(raw_input())
while T>0:
	N = int(raw_input())
	arr = map(int,raw_input().split())
	total = N
	i=0
	j=0
	k=1
	while k<N:
		if arr[k]>=arr[k-1]:
			j+=1
			if k==N-1:
				total+=((j-i)*(j-i+1))/2
		else:
			total+=((j-i)*(j-i+1))/2
			i=k
			j=k
		k+=1
	print total
	T-=1
