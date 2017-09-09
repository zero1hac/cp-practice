#!/bin/python

import sys

if __name__ == "__main__":
    n, m, k = raw_input().strip().split(' ')
    n, m, k = [int(n), int(m), int(k)]
    A = map(int, raw_input().strip().split(' '))
    S = map(int, raw_input().strip().split(' '))
    for a0 in xrange(m):
        l, r, x = raw_input().strip().split(' ')
        l, r, x = [int(l), int(r), int(x)]
        i=l-1
        while i<r:
            if not (A[i] in S):
                A[i]+=x
            i+=1
        print sum(A)
        # Write Your Code Here


