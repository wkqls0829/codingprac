import sys


def baseball():
    score = [0,0]
    for _ in range(9):
        a,b = list(map(int, sys.stdin.readline().split()))
        score = [score[0] + a, score[1] + b]
    if score[0] == score[1]:
        print("Draw")
    elif score[0] > score[1]:
        print("Yonsei")
    else:
        print("Korea")


if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        baseball()