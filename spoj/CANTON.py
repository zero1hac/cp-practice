T = int(raw_input())
import math.sqrt as sqp
while T>0:
	N = int(raw_input())
	x = sqp(8*N+1)/2
	t = (x*x+x)/2
	if x%2==0:
		k=t - N+1
		r = t-x+1
		print "TERM", N, "IS", k, "/", r
	else:
		r = 
