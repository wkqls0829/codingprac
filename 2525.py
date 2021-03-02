import sys


def ovenclock():
    sin = map(int, sys.stdin.readline().split())
    A, B= list(sin)
    C = int(sys.stdin.readline())
    nb = (B+C) % 60
    na = (A+(B+C)//60)%24
    print(f'{na} {nb}')


if __name__ == "__main__":
    ovenclock()
