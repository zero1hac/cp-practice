N = int(raw_input().strip())
t = []
for i in range(N):
    t1, t2 = map(int, raw_input().strip().split())
    t.append((t1, t2, i+1))
t.sort()
l = t[0][0]
r = t[N-1][1]
for i in range(N):
    if t[i][1] > r:
        r = t[i][1]

flag =0
for i in range(N):
    if t[i][0] <=l and t[i][1] >= r:
        print t[i][2]
        flag = 1
        break

if flag==0:
    print "-1"
