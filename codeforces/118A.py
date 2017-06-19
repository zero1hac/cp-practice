import re
string = raw_input().strip()
string = string.lower()
string = re.sub(r'[aeiouy]', '', string)
print '.'+'.'.join([i for i in string])
