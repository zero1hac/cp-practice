n = int(raw_input().strip())
string = raw_input().strip()

t = string[0]
curr_cont = 0
for i  in range(1,n):	
	if t==string[i]:
		curr_cont+=1
	else:
		t = string[i]
print curr_cont
