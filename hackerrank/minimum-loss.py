# Enter your code here. Read input from STDIN. Print output to STDOUT
N = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
arr1 = [(arr[i], i) for i in xrange(N)]
#print arr1
min_ = 200000000000
arr1.sort()
#print arr1
for i in xrange(N-1):
    if arr1[i+1][0]-arr1[i][0] < min_ and arr1[i+1][1]-arr1[i][1]<0 and arr1[i+1][0]-arr1[i][0]>0:
        min_ = arr1[i+1][0]-arr1[i][0]
print min_
