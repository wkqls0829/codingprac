import sys

def inttri(triangle):
    trisum = [[0 for _ in range(i+1)] for i in range(len(triangle))]
    trisum[0][0] = triangle[0][0]
    for i in range(len(triangle)-1):
        for j in range(i+1):
            trisum[i+1][j] = max(trisum[i+1][j], trisum[i][j] + triangle[i+1][j])
            trisum[i+1][j+1]= trisum[i][j] + triangle[i+1][j+1]
    return (max(trisum[len(triangle)-1]))



if __name__ == "__main__":
    height = int(input())
    triangle = [[] for _ in range(height)]
    for i in range(height):
        triangle[i].extend(list(map(int, sys.stdin.readline().split())))
    print(inttri(triangle))