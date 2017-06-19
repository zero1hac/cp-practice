k = int(raw_input().strip())
from collections import Counter
string = raw_input().strip()
countss = dict(Counter(string))
flag = 0
#t = countss.values()[0]
for i in countss.values():
	if i%k!=0:
		flag=1
for i,j in countss.items():
	countss[i] = j/k
if flag==1:
	print "-1"
else:
	print ''.join([i*j for i,j in countss.items()])*k

