import sys


def noise():
    Ain = sys.stdin.readline()
    A = len(Ain) - 2
    op = sys.stdin.readline().rstrip()
    Bin = sys.stdin.readline()
    B = len(Bin) - 2
    if B > A:
        A, B = B, A
    toprint = ""
    if op == "*":
        toprint += "1"
        for i in range(A + B):
            toprint += "0"
    else:
        if A == B:
            toprint += "2"
            for i in range(A):
                toprint += "0"
        else:
            toprint += "1"
            for i in range(A - B -1):
                toprint += "0"
            toprint+="1"
            for i in range(B):
                toprint += "0"
    print(toprint)

if __name__ == "__main__":
    noise()