N = int(raw_input())
i = 1
while i<=N*N:
	nm = raw_input()
	i+=1
i = 1
t=1
str1 = ""
while i<=N:
	str1+=str(t)+" "
	t+=N+1
	i+=1
print str1
