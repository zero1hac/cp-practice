n = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
neg = 0
pos = 0
neg_list = []
pos_list = []
zero_list = []
for i in arr:
	if i<0:
		neg_list.append(str(i))
		neg+=1
	elif i>0:
		pos_list.append(str(i))
		pos+=1
	else:
		zero_list.append(str(i))
if pos==0:
	pos_list.append(neg_list[0])
	pos_list.append(neg_list[1])
	pos+=2
	neg_list = neg_list[2:]
	neg-=2
if neg%2==0:
	zero_list.append(neg_list[0])
	neg_list = neg_list[1:]
	neg-=1

print neg, ' '.join(neg_list)
print pos, ' '.join(pos_list)
print len(zero_list), ' '.join(zero_list)
