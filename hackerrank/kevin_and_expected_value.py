from __future__ import division
value = 0.0903222587612462438
L = 10000
small = [0]*L
small[0] = 1/2
for i in xrange(1,L):
	small[i] = small[i-1] + (i+1/4)**(1/2)
def S(n):
	if n<L:
		return small[n]
	else:
		return 2/3*n**(3/2)+3/4*n**(1/2) + value + 23/192*n**(-1/2) - 5/512*n**(-3/2)
def f(N):
	return 1/(2*N) * (N-2+2*S(N-1))
for cas in xrange(input()):
	print(f(input()))
