import math

def is_prime(num, mem):
    if num in mem:
        return False
    for a in range(2, int(math.sqrt(num)) + 1):
        if num % a == 0:
            mem[num] = False
            return False
    mem[num] = True
    return True

def get_primes(num_str, numbers, mem):
    if not numbers:
        if is_prime(int(num_str), mem):
            return {int(num_str)}
    toreturn = set()
    if(is_prime(int(num_str), mem)):
        toreturn.add(int(num_str))
    for i, n in enumerate(numbers):
        toreturn.update(get_primes(num_str + n, numbers[:i] + numbers[i+1:], mem))
    return toreturn

def solution(numbers):
    answer = 0
    mem={0:False, 1:False}
    toreturn = set()
    numbers = list(numbers)
    for i, a in enumerate(numbers):
        new_nums = numbers[:i] + numbers[i+1:]
        toreturn.update(get_primes(a, new_nums, mem))
    return len(toreturn)

if __name__ =="__main__":
    numbers = input()
    print(solution(numbers))