Test_case = int(raw_input())
while Test_case>0:
	Number = int(raw_input())
	itr = 2
	product = 1
	while itr<=Number:
		product*=itr
		itr+=1
	print product
	Test_case-=1
