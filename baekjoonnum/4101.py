import sys


def isitlarge():
    a, b = list(map(int, sys.stdin.readline().split()))
    if a == b == 0: return False
    if a > b:
        print("Yes")
    else:
        print("No")
    return True


if __name__ == "__main__":
    while(isitlarge()):
        pass
