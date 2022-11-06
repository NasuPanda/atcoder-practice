taro_score = hanako_score = 0

n = int(input())
for _ in range(n):
    taro_card, hanako_card = input().split()
    if taro_card > hanako_card:
        taro_score += 3
    elif hanako_card > taro_card:
        hanako_score += 3
    else:
        hanako_score += 1
        taro_score += 1

print(taro_score, hanako_score)
