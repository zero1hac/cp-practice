import re
string = raw_input().strip()
string  = string.replace('WUB',' ')
string = string.strip()
string = re.sub(r' +', ' ', string)
print string
