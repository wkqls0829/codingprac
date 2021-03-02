from collections import deque
import sys

def solution(bl, w, tw):
    onbridge = deque([0 for _ in range(bl)])
    time = 0
    for t in tw:
        w += onbridge.popleft()
        while t > w:
            onbridge.append(0)
            time += 1
            w += onbridge.popleft()
        onbridge.append(t)
        w -= t
        time += 1
    while sum(onbridge) != 0:
        onbridge.popleft()
        time+=1
    return time



if __name__ == '__main__':
    bl = int(input())
    w = int(input())
    tw = list(map(int, sys.stdin.readline().split()))
    print(solution(bl, w, tw))