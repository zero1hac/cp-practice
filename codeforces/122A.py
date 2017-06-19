N = int(raw_input().strip())
def check_l(n):
	list_n = list(set(list(str(n))))
	if len(list_n)==2 and '4' in list_n and '7' in list_n:
		return True
	elif list_n == ['4']:
		return True
	elif list_n == ['7']:
		return True
	else:
		return False

flag = 0
for i in range(1,N+1):
	if N%i==0 and check_l(i):
		print "YES"
		flag=1
		break
if flag==0:
	print "NO"

