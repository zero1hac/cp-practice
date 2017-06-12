'''Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU'''
import sys
T = int(sys.stdin.readline().strip("\n"))
while T>0:
	n = int(sys.stdin.readline().strip("\n"))
	d = map(int, raw_input().split())
	d = list(set(d))
	print len(d)
	T-=1
