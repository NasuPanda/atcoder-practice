def get_digit_sum(n):
    n = str(n)
    total = 0
    for i in n:
        total += int(i)
    return total


n, a, b = map(int, input().split())
sum = 0

for i in range(1, n+1):
    if a <= get_digit_sum(i) <= b:
        sum += i

print(sum)