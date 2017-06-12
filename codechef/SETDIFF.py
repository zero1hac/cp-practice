'''Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing 
IIT BHU Varanasi'''
T=input()
while T>0:
	N=input()
	sumi=0
	s = raw_input()
	s = [int(i) for i in s.split(" ")]
	s.sort()
	for i in range(1,N+1):
		sumi+=s[i-1]*(2**(i-1)-2**(N-i))
	print sumi%1000000007

		
