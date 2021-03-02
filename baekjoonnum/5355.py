import sys


def marsmath():
    sin = sys.stdin.readline().split()
    num = float(sin[0])
    for op in sin[1:]:
        if op == "@":
            num *= 3
        elif op == "%":
            num += 5
        elif op == "#":
            num -= 7
    print(f'{num:.2f}')


if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        marsmath()