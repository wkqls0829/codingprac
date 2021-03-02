import sys


def r2():
    r1, s = list(map(int, sys.stdin.readline().split()))
    print(2*s - r1)


if __name__ == "__main__":
    r2()
