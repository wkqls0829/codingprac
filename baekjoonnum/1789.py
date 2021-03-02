import sys


def numsum():
    s = int(input())
    sum = 0
    i = 1
    while(sum <= s):
        sum += i
        i += 1
    print(i - 2)


if __name__ == "__main__":
    numsum()