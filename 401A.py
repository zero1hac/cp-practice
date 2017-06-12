import math
n, x = map(int, raw_input().strip().split())
arr = map(int, raw_input().strip().split())
zero = 0
arr_pos = [0]*x
arr_neg = [0]*x

for i in arr:
	if i==0:
		zero+=1
	elif i>0:
		arr_pos[i-1]+=1
	else:
		arr_neg[-1*(i) - 1] +=1
sum_pos = 0
sum_neg = 0
for i in range(x):
	sum_pos+=arr_pos[i]*(i+1)
	sum_neg+=arr_neg[i]*(i+1)
#print "sum_pos", sum_pos
#print "sum_neg", sum_neg
#print arr_pos
#print arr_neg
total = abs(abs(sum_pos) - abs(sum_neg))
print int(math.ceil(total/(1.0*x)))
