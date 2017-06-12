n,k = map(int, raw_input().strip().split())
i=0
poles = []
wts = []
while i<n:
    p,w = map(int, raw_input().strip().split())
    poles.append(p)
    wts.append(w)
    i+=1
poles.reverse()
wts.reverse()
print poles
print wts
costs = [[0]*n]*k
print costs
