# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
N = int(raw_input().strip())
arr = map(int, raw_input().strip().split())
sorted_arr = sorted(arr)
mind = sys.maxint
for i in range(N-1):
    absd = abs(sorted_arr[i] - sorted_arr[i+1])
    if absd<mind:
        mind = absd
for i in range(N-1):
    absd = abs(sorted_arr[i] - sorted_arr[i+1])
    if absd==mind:
        print sorted_arr[i], sorted_arr[i+1],
    
