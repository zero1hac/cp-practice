string = raw_input().strip()
sum_upper = sum([1 if i.isupper() else 0 for i in string])
sum_lower = sum([1 if i.islower() else 0 for i in string])

if sum_upper>sum_lower:
	print string.upper()
elif sum_lower>sum_upper:
	print string.lower()
else:
	print string.lower()
