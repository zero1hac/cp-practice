n = int(raw_input().strip())

max_ = n

if -1*(abs(n)/10) > max_:
	max_ = -1*(abs(n)/10)
if (-1*(abs(n)%10) + int(n/100.0)*10) > max_:
	max_ = (-1*(abs(n)%10) + int(n/100.0)*10)
print max_
