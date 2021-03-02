import sys


def vase():
    sin = input()
    height = 10
    prev = sin[0]
    for v in sin[1:]:
        if v == prev:
            height += 5
        else:
            prev = v
            height += 10
    print(height)


if __name__ == "__main__":
    vase()