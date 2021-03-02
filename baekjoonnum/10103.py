import sys


def dicegame():
    score = [100, 100]
    n = int(input())
    for _ in range(n):
        a,b = list(map(int, sys.stdin.readline().split()))
        if a == b:
            continue
        if a > b:
            score[1] -= a
        else:
            score[0] -= b
    print(score[0])
    print(score[1])


if __name__ == "__main__":
    dicegame()