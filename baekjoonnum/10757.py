import sys


def largeplus():
    A, B = sys.stdin.readline().split()
    up = 0
    A = A[::-1]
    B = B[::-1]
    result = ""
    if len(A) < len(B):
        A, B = B, A
    B += "0"*(len(A)-len(B))
    for a, b in zip(A, B):
        up, r = divmod(int(a)+int(b)+up, 10)
        result += str(r)
    if up:
        result += "1"
    print(result[::-1])


if __name__ =="__main__":
    largeplus()