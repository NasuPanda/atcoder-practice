import sys

while True:
    H, W = map(int, sys.stdin.readline().split())
    if H == W == 0:
        break
    print("#" * W)
    [print("#" + "." * (W - 2) + "#") for _ in range(H - 2)]
    print("#" * W)
    print()

