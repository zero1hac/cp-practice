NMC = map(int,raw_input().split())
N = map(int,raw_input().split())
M = map(int,raw_input().split())
n = [0]*(NMC[2]+1)
m = [0]*(NMC[2]+1)
i = 0
while i<NMC[0]:
	n[N[i]]+=1
	i+=1
i=0
while i<NMC[1]:
	m[M[i]]+=1
	i+=1
i=1
count = [0]*(NMC[2])
while i<NMC[2]+1:
	count[i-1]+=n[i]*m[i]
	i+=1
result = [1]
from itertools import izip,chain
for i in count:
	result = [x+y*i for x,y in izip(chain([0],result),chain(result,[0]))]
j = (result[0:len(result)-2])[::-1]
str1 = ""
for i in j:
	t = i%1000000007
	str1+=str(t)+" "
str1+="0"
print str1
