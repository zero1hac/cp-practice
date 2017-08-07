#!/bin/python

import sys

if __name__ == "__main__":
    n, m, k = raw_input().strip().split(' ')
    n, m, k = [int(n), int(m), int(k)]
    sock = []
    for a0 in xrange(m):
        x, y = raw_input().strip().split(' ')
        x, y = [int(x), int(y)]
        sock.append((x, y))
    i=0
    row_bottom = []
    col_right = []
    col_left = []
    row_up = []
    while i<m:
        if sock[i][1]==0 and sock[i][0]<n:
            row_bottom.append((sock[i][0], sock[i][1]))
        if sock[i][0]==n and sock[i][1]<n:
            col_right.append((sock[i][0], sock[i][1]))
        if sock[i][1]==n and sock[i][0]>0:
            row_up.append((sock[i][0], sock[i][1]))
        if sock[i][0]==0 and sock[i][1]>0:
            col_left.append((sock[i][0], sock[i][1]))
        i+=1
    #print row_bottom
    #print row_up
    #print col_left
    #print col_right
    
    row_bottom.sort()
    row_up.sort()
    col_right.sort()
    col_left.sort()
    #print row_bottom
    #print row_up
    #print col_left
    #print col_right
    dist = []
    sock1 = row_bottom + col_right + row_up[::-1] + col_left[::-1]
    sum1=0
    #print sock1
    i=0
    dist = []
    while i<m-1:
        dist.append(abs(sock1[i][0]-sock1[i+1][0]) + abs(sock1[i][1]-sock1[i+1][1]))
        i+=1
    dist.append(abs(sock1[m-1][0]-sock1[0][0]) + abs(sock1[m-1][1]-sock1[0][1]))
    #print dist
    sum1 = 0
    i=0
    while i<k-1:
        sum1+=dist[i]
        i+=1
    min_dist = sum1
    #print "sum1", sum1
    while i<m+k-1:
        sum1 += dist[i%m]
        sum1 -= dist[(i-(k-1))]
        #print sum1
        min_dist = min(min_dist, sum1)
        i+=1
    print min_dist
    
    # Write Your Code Here

