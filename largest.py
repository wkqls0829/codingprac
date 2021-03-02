import sys
import collections
import itertools

def solution(numbers):
    numbers = list(map(str, numbers))
    numbers.sort(key=lambda x:x*3, reverse=True)
    return str(int(''.join(numbers)))


if __name__ == '__main__':
    numbers = list(map(int, sys.stdin.readline().split()))
    print(solution(numbers))