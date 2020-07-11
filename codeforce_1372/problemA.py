import sys
from collections import deque
input = sys.stdin.readline


def solve(N):
    result = deque()
    for i in range(1, N+1):
        result.append(i - ((i+1) % 2))
    return result


def main():
    t = int(input())

    for _ in range(t):
        N = int(input())
        print(*solve(N))


if __name__ == "__main__":
    main()
