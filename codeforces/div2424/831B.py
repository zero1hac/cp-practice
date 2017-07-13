s1 = raw_input().strip()
s2 = raw_input().strip()
s3 = raw_input().strip()
d = {}


for i in range(len(s1)):
    d[s1[i]] = s2[i]

res = ""

for i in range(len(s3)):
    if s3[i].isalpha():
        if s3[i].islower():
            res+=d[s3[i]]
        else:
            res+= d[s3[i].lower()].upper()
    else:
        res+=s3[i]

print res
