string = "hello"
message = raw_input().strip()

def rec_is_subseq(str1, str2, m, n):
	if m==0:
		return True
	if n==0:
		return False
	if str1[m-1]==str2[n-1]:
		return rec_is_subseq(str1, str2, m-1, n-1)
	else:
		return rec_is_subseq(str1, str2, m, n-1)

len_message = len(message)
if rec_is_subseq(string, message, 5, len_message):
	print "YES"
else:
	print "NO"
