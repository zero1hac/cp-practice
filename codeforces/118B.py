N = int(raw_input().strip())
i = 0
while abs(N-i)<=N:
	if i<=N:
		for j in range(abs(N-i)):
                	print " ",
		for k in range(0,i+1):
			print k,
		for m in range(0,i)[::-1]:
			print m,
		print
	else:
		break
	i+=1
i-=2
while abs(N-i)<=N:
	#print abs(N-i), "i",i
        #print "".join([" "]*abs(N-i-1)),
	if i>=0:
		print " ".join([" "]*abs(N-i)),
		for k in range(0,i+1):
                        print k,
                for m in range(0,i)[::-1]:
                        print m,
                print
	else:
		break
	
	i-=1
