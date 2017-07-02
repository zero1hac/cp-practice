m, n = map(int, raw_input().strip().split())
if m>n:
    k = m
    m = n
    n = k
count = 1
for i in range(1, m+1):
    count*=i
print count
    

