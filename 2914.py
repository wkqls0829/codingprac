import sys
import math

def copyright():
    A, I = list(map(int, sys.stdin.readline().split()))
    print(A*(I-1) + 1)


if __name__ == "__main__":
    copyright()