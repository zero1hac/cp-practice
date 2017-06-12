def modpow(base,exp,mod):
	exp = int(bin(exp)[2:])
	r = 1
	base = base%mod
	while exp>0:
		if exp%2==1:
			r = (r*base)%mod
		exp = exp >>1
		base = (base*base)%mod
	return r
Test_case = int(raw_input())
while Test_case>0:
	nums = map(int,raw_input().split())
	print modpow(nums[0],nums[1],10)
	Test_case-=1
