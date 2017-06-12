s,t = map(int, raw_input().strip().split())
a,b = map(int, raw_input().strip().split())
m,n = map(int, raw_input().strip().split())
arr_m = map(int, raw_input().strip().split())
arr_n = map(int, raw_input().strip().split())
print s,t
print a,b
print m,n

sum1 = sum([1 if ((a+x >= s) and (a+x <= t)) else 0 for x in arr_m])
sum2 = sum([1 if ((b+x >= s) and (b+x <= t)) else 0 for x in arr_n])

print sum1
print sum2
