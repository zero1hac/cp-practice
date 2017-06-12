#Dushyant Kumar Mishra
#zeroonehacker
#Mathematics and Computing
#IIT BHU varanasi

def checkRegularity(striing):
	listen = []
	aakhiri = ""
	counter = 0
	for i in range(len(striing)):
		if striing[i] == "(":
			listen.append(striing[i])
		elif striing[i] == ")":
			if len(listen) > 0:
				if aakhiri == "(":
					counter += 1
				listen.pop()
			else:
				return (False, counter)
		else:
			return (False, counter)
		aakhiri = striing[i]
	if len(listen) != 0:
		return (False, counter)
	return (True, counter)
def is_prime(n):
	if n == 2 or n == 3: return True
	if n < 2 or n%2 == 0: return False
	if n < 9: return True
	if n%3 == 0: return False
	r = int(n**0.5)
	f = 5
	while f <= r:
		print '\t',f
		if n%f == 0: return False
		if n%(f+2) == 0: return False
		f +=6
	return True  
def ispalindrome(word):
	if len(word) < 2: return True
	if word[0] != word[-1]: return False
	return ispalindrome(word[1:-1])
def ankparen(striing, Kmap):
	regularity = checkRegularity(striing)
	striing = list(striing)
	if regularity[0] == False:
		if Kmap == 1:
			return "".join(striing)
		else:
			return "-1"
	else:
		counter=regularity[1]
		if Kmap>counter*2:
			return "-1"
		oC=0
		cC=0
		c=0
		l=""
		for i in range(len(striing)):
			if striing[i] != l:
				if striing[i] == "(":
					oC += 1
				elif striing[i] == ")":
					cC += 1
				if oC > cC:
					c = (counter * 2) - (oC - 1)
				else:
					c = cC
				if c == Kmap:
					striing.pop(i)
					return "".join(striing)
			l=striing[i]
		return "-1"


T = int(raw_input())
while T>0:
	S = raw_input()
	K = int(raw_input())
	print ankparen(S, K)
	T-=1
