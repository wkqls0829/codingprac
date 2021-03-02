import sys

def cut_part(n, m, mem):
    if n == m == 1:
        return 0
    if n < m:
        n, m = m, n
    if (n,m) in mem:
        return mem[(n,m)]
    mem[(n,m)] = cut_part(n//2, m, mem) + cut_part(n - n//2, m, mem) + 1
    return mem[(n,m)]



def cut_chocolate():
    input = sys.stdin.readline
    n, m = list(map(int, (input().split())))
    mem = dict()
    print(cut_part(n, m, mem))


if __name__ == "__main__":
    cut_chocolate()
