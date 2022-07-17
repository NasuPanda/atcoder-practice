import sys

while True:
    H, W = map(int, sys.stdin.readline().split())
    if H == W == 0:
        break
    [print("#" * W) for _ in range(H)]
    print()
