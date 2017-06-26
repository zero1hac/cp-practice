import operator
s, n = map(int, raw_input().strip().split())
list_d = []
for i in range(n):
	x, y = map(int, raw_input().strip().split())
	list_d.append((x, y))
list_d.sort(key=operator.itemgetter(0))
flag=0
for i in range(n):
	if s<=list_d[i][0]:
		flag=1
		break
	else:
		s+=list_d[i][1]
if flag==0:
	print "YES"
else:
	print "NO"	
