n = int(input())
cards = list(map(int, input().split()))
cards.sort(reverse=True)

alice = 0
bob = 0

while True:
    try:
        alice += cards.pop(0)
        bob += cards.pop(0)
    except IndexError:
        print(alice - bob)
        break
