#Dushyant Kumar Mishra
#zeroonehacker
#Mathematics and Computing
#IIT BHU varanasi
T = int(raw_input())
while T>0:
	string = raw_input()
	string_list = list(set(list(string)))
	print len(string_list)
	T-=1

