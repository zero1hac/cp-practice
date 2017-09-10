# Enter your code here. Read input from STDIN. Print output to STDOUT
T = int(raw_input())
while T>0:
    N = int(raw_input())
    arr = map(int, raw_input().split())
    max_sum_so_far = -99999
    conti_sum = 0
    non_conti_sum = 0
    for x in arr:
        conti_sum += x
        if x>0:
            non_conti_sum += x
        if conti_sum > max_sum_so_far:
            max_sum_so_far = conti_sum
        if conti_sum <0:
            conti_sum = 0
    if non_conti_sum == 0:
        non_conti_sum = max(arr)
    print max_sum_so_far, non_conti_sum
    T-=1
