n, k, l, c, d, p, nl, np = map(int, raw_input().strip().split())
#print k*l/nl
#print p/np
#print c*d
print min(l*k/nl, min(p/np, c*d))/n
