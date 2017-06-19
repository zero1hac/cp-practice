n,m = map(int, raw_input().strip().split())
grades = []
for a0 in range(n):
	t  = map(int, list(raw_input().strip()))
	grades.append(t)
count =0 
#print grades
for i in range(n):
	flag = 0
	count_max = 0
	for j in range(m):
		if grades[i][j] >= max([grades[k][j] for k in range(n)]):
			flag = 1
	if flag==1:
		count+=1
print count		
