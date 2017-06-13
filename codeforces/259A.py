i=0
flag = 0
while i<8:
	string = raw_input().strip()
	r = string[0]
	for j in range(1,8):
		if r==string[j]:
			flag=1
			break
		r = string[j]
	if flag==1:
		print "NO"
		break
	i+=1
if flag==0:
	print "YES"

