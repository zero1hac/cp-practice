line1 = raw_input().strip()
line2 = raw_input().strip()
line3 = raw_input().strip()

line3 = ''.join(sorted(line3))
flag = 0
total = line1+line2
total = ''.join(sorted(total))
if len(total)!=len(line3):
	flag=1
	print "NO"
else:
	for i in range(len(total)):
		if total[i] != line3[i]:
			print "NO"
			flag=1
			break
if flag==0:
	print "YES"
