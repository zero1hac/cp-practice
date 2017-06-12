n, k = map(int, raw_input().strip().split())
num = [str(i) for i in range(1,n*k+1)]
num_children = [0]*k
arr = map(str, raw_input().strip().split())
strings = ['']*k
for a0 in range(k):
	num.remove(arr[a0])
	strings[a0]+=arr[a0]+' '

i = 0 
j = 0 
while i<n*k-k:
	strings[j]+=' '.join(num[i:i+n-1])
	i+=n-1
	j+=1
i=0
while i<k:
	print strings[i]
	i+=1

