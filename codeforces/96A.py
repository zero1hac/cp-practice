string = raw_input().strip()
max_so_far1 = 0
max_this1 = 0
for i in range(len(string)):
	if string[i]=='1':
		max_so_far1+=1
		if max_this1<max_so_far1:
			max_this1 = max_so_far1 
	else:
		max_so_far1=0

max_so_far0 = 0
max_this0 = 0
for i in range(len(string)):
        if string[i]=='0':
                max_so_far0+=1
                if max_this0<max_so_far0:
                        max_this0 = max_so_far0
        else:
                max_so_far0=0

if max_this0>=7 or max_this1>=7:
	print "YES"
else:
	print "NO"
