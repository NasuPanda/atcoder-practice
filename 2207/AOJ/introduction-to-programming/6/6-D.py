import sys

n, m = map(int, sys.stdin.readline().split())
A = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
B = [int(sys.stdin.readline()) for _ in range(m)]
C = []

for a in A:
    c = 0
    for i, b in enumerate(B):
        c += a[i] * b
    C.append(c)

[print(c) for c in C]
