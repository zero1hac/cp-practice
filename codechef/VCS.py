#Dushyant Kumar Mishra
#zeroonehacker
#Mathematics and Computing 
#IIT BHU
import sys
T = int(raw_input())
while T>0:
	nmk = map(int,raw_input().split())
	A = map(int,raw_input().split())
	B = map(int,raw_input().split())
	a = set(A).intersection(B)
	count1 = len(list(a))
	j = set(range(1,nmk[0]+1)) - set(A)
	k = set(range(1,nmk[0]+1)) - set(B)
	k = set(k).intersection(j)
	count2 = len(list(k))
	print str(count1)+" "+str(count2)
	T-=1
