def cutecho():
    N = int(input())
    count = [0,0]
    for _ in range(N):
        count[int(input())] += 1
    if count[1] > count[0]:
        print("Junhee is cute!")
    elif count[0] > count[1]:
        print("Junhee is not cute!")


if __name__ == "__main__":
    cutecho()