n = int(input())
a = list(map(int, input().split()))

count = 0

while True:
    a = [i / 2 for i in a if i % 2 == 0]
    if len(a) != n:
        break
    count += 1

print(count)