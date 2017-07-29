T = int(raw_input().strip())
for a in range(T):
    arr = map(int, raw_input().strip().split())
    arr.sort()
    last = arr[-1]
    if last!=len(arr)-1:
        print last
    else:
        print arr[-2]
