n, a, b = map(int, raw_input().strip().split())
count = 0
count_a = 0
count_a_1 = 0
count_a_2 = 0
count_b = 0
t = map(int, raw_input().strip().split())
#print t
for i in t:
    #t = int(raw_input().strip())
    if i==1:
        if count_a<a:
            count_a+=1
        elif count_a_1+count_b<b:
            count_a_1+=1
        elif count_a_2<count_a_1:
            count_a_2+=1
        else:
            count+=1
    if i==2:
        if count_b+count_a_1<b:
            count_b+=1
        else:
            count+=2
#    print "count_a", count_a
#    print "count_a_1", count_a_1
#    print "count_a_2", count_a_2
#    print "count_b", count_b
#
print count
