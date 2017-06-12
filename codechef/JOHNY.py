#Dushyant Kumar Mishra
#zeroonehacker
#Mathematics and Computing
#IIT BHU Varanasi
import sys
T = int(sys.stdin.readline().strip("\n"))
while T>0:
	N = int(sys.stdin.readline().strip("\n"))
	num_list = map(int,raw_input().split())
	K = int(sys.stdin.readline().strip("\n"))
	K = num_list[K-1]
	f = sorted(num_list)
	print f.index(K)+1
	T-=1

	
