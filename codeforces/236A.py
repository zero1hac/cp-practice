name = raw_input().strip()
len_name_distinct = len(list(set(list(name))))
if len_name_distinct%2==0:
	print "CHAT WITH HER!"
else:
	print "IGNORE HIM!"
