import sys
from collections import defaultdict

def solution(clothes):
    result = 1
    clothes_dict = defaultdict(list)
    for c in clothes:
        clothes_dict[c[1]].append(c[0])
    for _, cd in clothes_dict.items():
        result *= len(cd)+1
    return result-1

if __name__ == '__main__':
    num_clothes = int(input())
    clothes = []
    for _ in range(num_clothes):
        clothes.append(sys.stdin.readline().split())
    print(solution(clothes))