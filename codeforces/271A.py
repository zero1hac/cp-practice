year = int(raw_input().strip())
def check_year(year1):
	return len(list(set(list(str(year1)))))==4

year+=1
while year<=9013:
	if check_year(year):
		print year
		break
	year+=1

