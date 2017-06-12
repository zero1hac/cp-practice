def fun(initial,target):
	if initial==target:
		return "Possible"
	if len(initial)>len(target):
		return "Impossible"
	nets = target[0:len(target)-1]
	if target[-1]=='A':
		return fun(initial,target[0:len(target)-1])
	elif target[-1]=='B':
		res = nets[::-1]
		return fun(initial,res)
	return "Impossible"
if __name__ =="__main__":
	s1 = raw_input().strip("\n")
	s2 = raw_input().strip("\n")
	print fun(s1,s2)
		
