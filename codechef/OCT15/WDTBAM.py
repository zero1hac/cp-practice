T = int(raw_input())
while T>0:
	N = int(raw_input())
	str1 = raw_input()
	str2 = raw_input()
	w = map(int,raw_input().split())
	counter = 0
	i = 0
	while i<N:
		if str1[i]==str2[i]:
			counter+=1
		i+=1
	if counter==N:
		print w[counter]
	else:
		maxi = w[0]
		i = 0
		while i<=counter:
			if maxi<w[i]:
				maxi = w[i]
			i+=1
		print maxi
	T-=1
