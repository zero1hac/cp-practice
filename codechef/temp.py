'''Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing 
IIT BHU Varanasi'''
import sys
T=int(sys.stdin.readline())
while T>0:
        N=int(sys.stdin.readline().strip("\n"))
        sumi=0
        s = sys.stdin.readline().strip("\n")
        s = [int(i) for i in s.split(" ")]
        s.sort()
        for i in range(1,N+1):
                sumi+=s[i-1]*(2**(i-1)-2**(N-i))
        print sumi%1000000007
	T-=1
