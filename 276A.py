n,k = map(int, raw_input().strip().split())
max_joy = -10000000000000
for a0 in range(n):
	f, t = map(int, raw_input().strip().split())
	if t>k:
		joy = f - (t - k)
	else:
		joy = f
	if joy>max_joy:
		max_joy = joy
print max_joy
