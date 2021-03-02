def divisorsum():
    n = int(input())
    while(n!=-1):
        div = []
        for i in range(1, n):
            if not n%i:
                div.append(i)
        if sum(div) == n:
            print(f'{n} = ' + ' + '.join(map(str, div)))
        else:
            print(f'{n} is NOT perfect.')
        n = int(input())


if __name__ == "__main__":
    divisorsum()
