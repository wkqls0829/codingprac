primes = []
if __name__ == '__main__':
    i = 2
    n = 600851475143
    largest_prime = 1
    while(n != 1):
        if all(i%p for p in primes):
            primes.append(i)
            if not n%i:
                largest_prime = i
                n /= i
        i+=1
    print(largest_prime)