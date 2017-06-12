Test_case  = int(raw_input())
while Test_case>0:
	sinput = map(int,raw_input().split())
	if sinput[0]-2==sinput[1] and sinput[0]%2==0:
		print sinput[0]+sinput[1]
	elif sinput[0]-2==sinput[1] and sinput[0]%2==1:
		print sinput[0]+sinput[1]-1
	elif sinput[0]==sinput[1] and sinput[0]%2==0:
		print sinput[0]+sinput[1]
	elif sinput[0]==sinput[1] and sinput[0]%2==1:
		print sinput[0]+sinput[1]-1
	else:
		print "No Number"
	Test_case-=1
