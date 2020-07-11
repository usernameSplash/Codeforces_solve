import sys
from collections import deque
input = sys.stdin.readline


def solve(data):
    result = 0
    maxValue = 0
    maxValue = data[0]
    for d in data:
        if maxValue < d:
            maxValue = d
        if maxValue > d:
            result += 1
    return result


def main():
    t = int(input())

    for _ in range(t):
        N = int(input())
        data = [int(v) for v in input().split()]
        print(solve(data))


if __name__ == "__main__":
    main()
