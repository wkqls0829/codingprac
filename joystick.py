import sys

def solution(name):
    nameint = list(map(lambda c: ord(c) - 65, name))
    nameint = list(map(lambda i: min(i, 26-i), nameint))
    movesum = sum(nameint)
    # add how much to move

    return movesum

if __name__ == '__main__':
    name = input()
    print(solution(name))