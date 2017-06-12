# Dushyant Kumar Mishra
# zeroonehacker
# Mathematics and Computing
# IIT BHU Varanasi
import sys

T = int(sys.stdin.readline().strip("\n"))
while T > 0:
    N = int(sys.stdin.readline().strip('\n'))
    wpl = raw_input()
    wp = [int(i) for i in wpl.strip(' ')]
    print str(wp)
    wpr = str(sys.stdin.readline())
    wp1 = [int(j) for j in wpr.strip(' ')]
    wp = sorted(wp)
    wp1 = sorted(wp1)
    i = 0
    j = 0
    res = 0
    while i < N and j < N:
        while wp[i] > wp1[j] and j < N:
            j += 1
        if j < N:
            res += 1
            j += 1
    print res
