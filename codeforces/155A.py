n = int(raw_input().strip())
nums = map(int, raw_input().strip().split())
max_s = nums[0]
low_s = nums[0]
count = 0
for a0 in range(1,n):
	if nums[a0]>max_s:
		count+=1
		max_s = nums[a0]
	if nums[a0]<low_s:
		count+=1
		low_s = nums[a0]
print count
