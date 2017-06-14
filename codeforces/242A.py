list_add = []
x, y, a, b = map(int, raw_input().strip().split())
for i in range(a, x+1):
	for j in range(b, y+1):
		if i>j:
			list_add.append(str(i)+' '+str(j))
i=0
print len(list_add)
#print list_add
while i<len(list_add):
	print list_add[i]
	i+=1
