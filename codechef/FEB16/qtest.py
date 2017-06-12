test_cases = int(raw_input())
while test_cases>0:
        Nums,term,times = map(int,raw_input().split())
        lists = map(int,raw_input().split())
        if Nums==1:
                print (lists[0]%(10**9+7))
        elif term==1:
                print (lists[0]%(10**9+7))
        else:
		g=  [2,5,6,7,8,9]
		sorted(g)
		if times > 10**6:
                        print((lists[1]+lists[0]*times)%(10**9+7))
                else:
                        for itr1 in range(times):
                                for itr2 in range(1,term):
                                        lists[itr2] = lists[itr2] + lists[itr2-1]
                        print (lists[term-1]%(10**9+7))
        test_cases-=1

