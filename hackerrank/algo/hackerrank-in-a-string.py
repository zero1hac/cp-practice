q = int(raw_input().strip())

while q:
    a = raw_input().strip()
    list_h = list(a)
    i=-1
    flag=0
    hackerrank = ['h','a','c','k','e','r','r','a','n','k']
    new_list = list_h
    for h in hackerrank:
        #new_list = new_list[i+1:]
        #print new_list, h
        if h in new_list:
            try:
                i = new_list.index(h)
                new_list = new_list[i+1:]
                #print i
            except:
                break
        else:
            flag=1
            print "NO"
            break
    if flag==0:
        print "YES"
    q-=1

