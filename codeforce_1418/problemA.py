import sys
from collections import deque
input = sys.stdin.readline


def solve(x, y, k):
    result = 0

    stick_cur = 1
    stick_goal = k + y*x

    coal_cur = 0
    coal_goal = k

    while True:
        if(stick_cur < stick_goal):
            stick_cur += (x-1)
            result += 1
            continue
        break

    while True:
        if(coal_cur < coal_goal):
            coal_cur += 1
            result += 1
            continue
        break

    return result


def main():
    t = int(input())

    for _ in range(t):
        line = input().split()
        x, y, k = [int(v) for v in line]
        print(solve(x, y, k))


if __name__ == "__main__":
    main()
