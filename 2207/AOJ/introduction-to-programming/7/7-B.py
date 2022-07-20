import sys

while True:
    n, x = map(int, sys.stdin.readline().split())
    if not n and not x:
        break

    count = 0

    for i in range(1, n + 1):
        for j in range(1, i):
            for k in range(1, j):
                if i + j + k == x:
                    count += 1

    print(count)
