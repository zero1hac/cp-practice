lb, bh, hl = map(int, raw_input().strip().split())
l = (lb*hl/bh)**0.5
b = (lb*bh/hl)**0.5
h = (bh*hl/lb)**0.5

print int(4*(l+b+h))
