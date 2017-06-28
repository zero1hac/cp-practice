r, b = map(int, raw_input().strip().split())
v = min(r,b)
p = r+b - 1 - v
print p, v
