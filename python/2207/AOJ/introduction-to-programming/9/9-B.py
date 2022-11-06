while True:
    cards = input()
    if cards == "-":
        break

    N = int(input())

    for _ in range(N):
        h = int(input())
        # シャッフル操作
        cards = cards[h:] + cards[:h]
    print(cards)
