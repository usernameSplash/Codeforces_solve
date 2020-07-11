import math
import sys
from collections import deque
input = sys.stdin.readline


def get_primes(n):
    max_length = int(math.sqrt(n))+1
    is_primes = [True] * max_length

    for i in range(3, n+1):
        if i % 2 == 0:
            continue
        if i >= max_length:
            return (1, n)
        if is_primes[i]:
            if n % i == 0:
                return (n//i, n-n//i)

            for j in range(i+i, max_length, i):
                is_primes[j] = False

    return None


def solve(N):

    if N % 2 == 0:
        return (N//2, N//2)

    result = get_primes(N)

    return result

    # for prime in primes:
    #     if N % prime == 0:
    #         print(prime)
    #         result[0] = N//prime
    #         result[1] = N - result[0]
    #         return result


def main():
    t = int(input())

    for _ in range(t):
        N = int(input())
        print(*solve(N))


if __name__ == "__main__":
    main()
