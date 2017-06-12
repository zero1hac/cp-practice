N = int(raw_input())
row = [0]*(N+1)
col = [0]*(N+1)
i = 0
str1 = ""
while i<N*N:
	lol = map(int,raw_input().split())
	if row[lol[0]]==0 and col[lol[1]]==0:
		str1+=str(i+1)+" "
		row[lol[1]]=1
		col[lol[1]]=1
	i+=1
print str1
