N = int(raw_input())

while N:
    grade = int(raw_input())
    if grade < 38:
        print grade
    else :
        if ((grade/5 +1)*5 - grade) < 3:
            print (grade/5 + 1)*5
        else:
            print grade
    N-=1
