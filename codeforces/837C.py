n,a,b = map(int, raw_input().strip().split())
r = []
for a0 in range(n):
    xi, yi = map(int, raw_input().strip().split())
    r.append((xi*yi, xi, yi))

def isValid(a, b, c, d):
    if a<=c and b<=d:
        return True
    t = a
    a = b
    b = t
    return (a<=c and b<=d)

result = 0
for i in range(n-1):
    for j in range(i+1, n):
        k=1
        while k<a:
            if isValid(r[i][1], r[i][2], k, b) and isValid(r[j][1], r[j][2], a-k, b):
                break
            k+=1
        if k<a:
            result = max(result, r[i][0] + r[j][0])
        k=1
        while k<b:
            if isValid(r[i][1], r[i][2], a, k) and isValid(r[j][1], r[j][2], a, b-k):
                break
            k+=1
        if k<b:
            result = max(result, r[i][0] + r[j][0])
print result
