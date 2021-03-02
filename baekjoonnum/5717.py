import sys


def friends():
    m, f = list(map(int, sys.stdin.readline().split()))
    if m == f == 0:
        return False
    print(m+f)
    return True


if __name__ == "__main__":
    while(friends()):
        pass