fil1 = open("input.txt", 'r')
fil2 = open("output.txt", 'w')
#arr = map(int, raw_input().strip().split())
y = fil1.readlines()
arr = y[0].strip().split()
n = arr[0]
m = arr[1]
t = min(n ,m)
if m>n:
    x = ''.join(['GB' for i in range(t)]) + ''.join(['G' for i in range(m-n)])
else:
    x = ''.join(['BG' for i in range(t) ]) + ''.join(['B' for i in range(n-m)])
fil2.write(x)
