'''
# Read input from stdin and provide input before running code
 
name = raw_input()
print 'Hi, %s.' % name
'''
T = int(raw_input().strip())
while T>0:
    E = int(raw_input().strip())
    list_roads = []
    for a in range(E):
        x, y = map(int ,raw_input().strip().split())
        list_roads.append(x)
        list_roads.append(y)
    print len(set(list_roads))
    T-=1
