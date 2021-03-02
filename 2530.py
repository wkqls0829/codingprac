import sys


def ai_clock():
    A, B, C = list(map(int, sys.stdin.readline().split()))
    D = int(sys.stdin.readline())
    cn, cr = divmod((C + D), 60)
    bn, br = divmod((B + cn), 60)
    an, ar = divmod((A + bn), 24)
    print(f'{ar} {br} {cr}')


if __name__ == "__main__":
    ai_clock()