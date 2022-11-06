import sys

n = int(input())
cards = {"S": list(range(1, 14)), "H": list(range(1, 14)), "C": list(range(1, 14)), "D": list(range(1, 14))}

for _ in range(n):
    pattern, rank = sys.stdin.readline().split()
    # 存在するカードはNoneにしていく
    cards[pattern][int(rank) - 1] = None

for p in ["S", "H", "C", "D"]:
    for i in cards[p]:
        if i:
            print(p, i)
