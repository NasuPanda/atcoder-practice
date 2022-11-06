# x, y を小さい順に並べて出力
# 0, 0 の時終了
import sys

while True:
    x, y = map(int, sys.stdin.readline().split())
    if x == y == 0:
        break

    print(*sorted([x, y]))
