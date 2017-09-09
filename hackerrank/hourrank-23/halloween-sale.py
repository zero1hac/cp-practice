#!/bin/python

import sys

def howManyGames(p, d, m, s):
    count = 0
    s1 = 0
    while 1:
        s1+=p
        if s1>s:
            break
        count+=1
        p = max(p-d, m)
    return count
    # Return the number of games you can buy

if __name__ == "__main__":
    p, d, m, s = raw_input().strip().split(' ')
    p, d, m, s = [int(p), int(d), int(m), int(s)]
    answer = howManyGames(p, d, m, s)
    print answer

