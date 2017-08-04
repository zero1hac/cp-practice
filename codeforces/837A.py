n = int(raw_input().strip())
text = raw_input().strip().split()
m = 0
for i in range(len(text)):
    r = text[i]
    vol = 0
    for k in r:
        if k.isupper():
            vol+=1
    if vol>m:
        m = vol
print m
