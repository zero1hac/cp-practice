n = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
arr.sort()
count = 0
for i in range(n):
    count += abs(arr[i] - (i+1))
print count
