import itertools

CONS = 'bcdfghjklmnpqrstvwxz'
VOW = 'aeiou'


def cross(i, j, itera):
    if itera % 2 == 0:
        for itr in itertools.product(i, j, repeat=itera//2):
            yield itr
    else:
        for itr in itertools.product(j, i, repeat=itera//2+1):
            if itr[0] != j[0]:
                break
            yield itr[1:]


def melodious_answers(n):
    return itertools.chain(cross(CONS, VOW, itera=n), cross(VOW, CONS, itera=n))


if __name__ == '__main__':
    for output in melodious_answers(int(raw_input().strip())):
        print(''.join(output))
