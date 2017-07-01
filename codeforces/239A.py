y, k, n = map(int ,raw_input().strip().split())
count = 0
x = y + k - y%k
t = x
while t<=n:
    print t - y,
    t  = t + k
    count+=1

if count==0:
    print "-1"
