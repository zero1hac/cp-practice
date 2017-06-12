'''Dushyant Kumar Mishra
zeroonehacker
Mathematics and Computing
IIT BHU Varanasi'''
import sys
T = int(sys.stdin.readline())
while T>0:
	S = raw_input()
	mid = len(S)/2
	if len(S)%2 == 0:
		if (''.join(sorted(S[:mid])) == ''.join(sorted(S[mid:]))):
			print "YES"
		else:
			print "NO"
	else:
		if (''.join(sorted(S[:mid])) == ''.join(sorted(S[mid+1:]))):
                        print "YES"
                else:
                        print "NO"

	T-=1
