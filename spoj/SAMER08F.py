while 1:
	N = int(raw_input())
	if N==0:
		break;
	else:
		i =1
		ans = 0
		while i<=N:
			ans+=i*i
			i+=1
		print ans
		
