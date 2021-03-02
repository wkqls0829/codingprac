import sys


def cookie():
    K, N, M = list(map(int, sys.stdin.readline().split()))
    print(max(0,K*N-M))


if __name__ == "__main__":
    cookie()