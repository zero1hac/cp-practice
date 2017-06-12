#Dushyant Kumar Mishra
#IIT BHU Mathematics and Computing
#zeroonehacker
T = int(raw_input())
while T>0:
	s = 0
	nk = map(int,raw_input().split())
	na = map(int,raw_input().split())
	s = sum(na)
	if nk[1]==1:
		if s%2==0:
			print "odd"
		else:
			print "even"
	else:
		print "even"
	T-=1
	
