n = int(raw_input().strip())
for a0 in range(n):
	string = raw_input().strip()
	len_string = len(string)
	if len_string>10:
		print string[0] + str(len_string-2) + string[-1]
	else:
		print string
