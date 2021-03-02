import sys


def tridice():
    a, b, c = sorted(list(map(int, sys.stdin.readline().split())))
    price = 0
    if a == b == c:
        price = 10000 + a*1000
    elif a == b or b == c:
        price = 1000 + b*100
    else:
        price = c*100
    return price


if __name__ == "__main__":
    N = int(input())
    largest = 0
    for _ in range(N):
        largest = max(largest, tridice())
    print(largest)