import sys


def bookpage():
    N = int(input())
    nums = [0 for _ in range(10)]
    for i in range(1, N+1):
        pg = str(i)
        for c in pg:
            nums[int(c)] += 1
    for n in nums:
        print(n, end=' ')
    print()


if __name__ == "__main__":
    bookpage()