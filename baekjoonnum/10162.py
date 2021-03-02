def elecrange():
    t = int(input())
    secs = [300, 60, 10]
    count = [0,0,0]
    for i, s in enumerate(secs):
        while t >= s:
            count[i] += 1
            t -= s
    if t:
        print(-1)
    else:
        print(' '.join(map(str, count)))


if __name__ == "__main__":
    elecrange()