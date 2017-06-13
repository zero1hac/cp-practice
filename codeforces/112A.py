string1 = raw_input().strip().lower()
string2 = raw_input().strip().lower()
if string1 < string2:
	print "-1"
elif string2< string1:
	print "1"
else:
	print "0"
