import sys
import math

def solution(cit):
    cit.sort()
    top, bottom = len(cit)-1, 0
    ptr = top//2
    ptrval = -1
    prev = -1, -1, -1
    while(1):
        print(" ".join(map(str, [top, ptr, bottom])))
        if prev == ptr:
            break
        ptrval = cit[ptr]
        ptrmin = ptr
        while ptrmin > 0 and cit[ptrmin-1] == ptrval:
            ptrmin -= 1
        prev = top, ptr, bottom
        if len(cit) - ptrmin >= ptrval:
            bottom, ptr = ptr, math.ceil((ptr+top)//2)
        else:
            top, ptr = ptr, (ptr+bottom)//2
    return ptrval

if __name__ == '__main__':
    cit = list(map(int, sys.stdin.readline().split()))
    print(solution(cit))