N = int(raw_input())
while N>0:
    ingd1 = raw_input().strip().split()
    ingd2 = raw_input().strip().split()
    count_sim = 0
    for i in ingd1:
        for j in ingd2:
            if i==j:
                count_sim+=1
    if count_sim>=2:
        print "similar"
    else:
        print "dissimilar"
    N-=1
