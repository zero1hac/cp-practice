test_cases = int(raw_input())
while test_cases>0:
	num, x, M = map(int,raw_input().split(" "))
	nums = map(int,raw_input().split(" "))
	if num==1:
		print (nums[0]%(10**9+7))
	elif x == 1:
		print (nums[0]%(10**9+7))
	else:
		if M> 10**6:
			print((nums[2]+nums[0]*M)%(10**9+7))
		else:
                        for itr1 in range(M):
                                for itr2 in range(1,x):
                                        nums[itr2] = nums[itr2] + nums[itr2-1]
                        print (nums[x-1]%(10**9+7))
	test_cases-=1
