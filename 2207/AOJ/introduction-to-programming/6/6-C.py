# 10部屋、３階建ての公舎４棟
residences = [[[0] * 10 for __ in range(3)] for __ in range(4)]

n = int(input())

for _ in range(n):
    # b棟f階のr番目の部屋にv人が追加で入居
    b, f, r, v = map(int, input().split())
    residences[b - 1][f - 1][r - 1] += v

for i, resident in enumerate(residences):
    for floor in resident:
        [print(f" {room}", end="") for room in floor]
        print()
    if i == 3:
        exit()
    print("#" * 20)