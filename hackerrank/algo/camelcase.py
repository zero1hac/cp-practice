import re

s = raw_input().strip()

print len(re.findall(r'[A-Z]',s))+1
