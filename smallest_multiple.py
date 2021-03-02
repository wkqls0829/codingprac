
if __name__ == '__main__':
    n = 10
    answer = 1
    for i in range(n, 1, -1):
        if answer%i:
            print(i)
            answer*=i
    print(answer)
