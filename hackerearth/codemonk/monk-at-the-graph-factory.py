n = int(raw_input().strip())
arr_sum = sum(map(int, raw_input().strip().split()))
if arr_sum==2*(n-1):
	print "Yes"
else:
	print "No"
