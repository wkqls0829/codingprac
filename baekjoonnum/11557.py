import sys


def yangjojang():
    N = int(input())
    collegename = ""
    maxdrink = 0
    for _ in range(N):
        sin = sys.stdin.readline().split()
        if int(sin[1]) > maxdrink:
            maxdrink = int(sin[1])
            collegename = sin[0]
    print(collegename)


if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        yangjojang()