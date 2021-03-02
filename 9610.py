import sys


def quadrant():
    n = int(input())
    qn = [0,0,0,0,0]
    for _ in range(n):
        x, y = list(map(int, sys.stdin.readline().split()))
        if x == 0 or y == 0:
            qn[0] += 1
        elif x > 0:
            if y > 0:
                qn[1] += 1
            else:
                qn[4] += 1
        else:
            if y > 0:
                qn[2] += 1
            else:
                qn[3] += 1

    for i in range(1, 5):
        print(f'Q{i}: {qn[i]}')
    print(f'AXIS: {qn[0]}')


if __name__ == "__main__":
    quadrant()