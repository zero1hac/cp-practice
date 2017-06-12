import sys
if __name__ == "__main__":
	S= sys.stdin.readline().split("\n")
	Q = int(sys.stdin.readline())
	L = S[0]
	while Q>0:
		LOLA = map(int,sys.stdin.readline().split(" "))
		if LOLA[1]>=LOLA[2]:
			L = L[:LOLA[0]-1]+(L[LOLA[0]-1:LOLA[1]])[::-1]+L[LOLA[1]:]
		if ''.join(list(L[LOLA[2]-1:LOLA[3]])) == ''.join(reversed(list(L[LOLA[2]-1:LOLA[3]]))):
			print "Yes"
		else:
			print "No"
		Q-=1
		L=S

