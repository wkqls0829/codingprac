import sys

MAXN = 1184000

def solution(N, number):
    nums = [[] for _ in range(9)]
    ncount = [9 for _ in range(MAXN)]
    tempn = N
    nums[1].append(N)
    ncount[N] = 1
    for i in range(1, 6):
        tempn += 10**i * N
        nums[i+1].append(tempn)
        ncount[tempn] = i+1
    tp = 0
    for i in range(1, 9):
        for j in range(1, 9-i):
            for a in nums[i]:
                for b in nums[j]:
                    calculated = [a + b, a - b, a*b, a//b]
                    for c in calculated:
                        if 0 < c < MAXN and ncount[c] > i+j:
                            ncount[c] = i+j
                            nums[i+j].append(c)
    if ncount[number] > 8:
        return -1
    return ncount[number]

if __name__ == "__main__":
    N, number = list(map(int, sys.stdin.readline().split()))
    print(solution(N, number))