n, t = map(int, raw_input().strip().split())
string = raw_input().strip()
for i in range(t):
	string = string.replace('BG', 'GB')
print string
