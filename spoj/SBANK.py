#Dushyant Kumar Mishra
#Mathematics and Computing
#IIT BHU VARANASI

T = int(raw_input())
while T>0:
	N = int(input())
	dicti = {}
	while N>0:
		s = raw_input()
		s = s.replace(' ','')
		if s in dicti:
			dicti[s]+=1
		else:
			dicti[s]=1
		N-=1
	l = sorted([i for i in dicti.keys()])
	for i in l:
		print i,dicti[str(i)]
	T-=1
