T = int(raw_input())
while T>0:
	s = map(str,raw_input().split())
	print int(str(int((s[0])[::-1])+int((s[1])[::-1]))[::-1])
	T-=1
