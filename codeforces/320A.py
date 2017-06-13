string = raw_input().strip()
string = string.replace('144','x')
string = string.replace('14','x')
string = string.replace('1','x')
string = string.replace('x', '')
if string=='':
	print "YES"
else:
	print "NO"
