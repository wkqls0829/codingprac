import sys


def tgn():
    r, e, c = list(map(int, sys.stdin.readline().split()))
    if r+c < e:
        print("advertise")
    elif r+c > e:
        print("do not advertise")
    else:
        print("does not matter")


if __name__ =="__main__":
    t = int(input())
    for _ in range(t):
        tgn()