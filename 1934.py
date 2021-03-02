import sys


def getgcd(a, b):
    if a < b:
        b, a = a, b
    while(b!=0):
        a, b = b, a%b
    return a


def getlcm():
    a, b = list(map(int, sys.stdin.readline().split()))
    print(int(a*b/getgcd(a,b)))


if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        getlcm()