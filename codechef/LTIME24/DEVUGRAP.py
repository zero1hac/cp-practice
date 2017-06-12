#Dushyant Kumar Mishra
#zeroonehacker
#Mathematics and Computing
#IIT BHU Varanasi
import sys
T = int(sys.stdin.readline().strip("\n"))
while T>0:
	nk = map(int,raw_input().split())
	ai = map(int,raw_input().split())
	c = 0
	i = 0
	t=0
	while i<nk[0]:
		t = ai[i]%nk[1]
		if t <= nk[1]/2:
			c+=t
		else:
			c+=nk[1]-t
		i+=1
	print c
	T-=1
