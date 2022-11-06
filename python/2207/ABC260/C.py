N, X, Y = map(int, input().split())
r, b = 1, 0
for _ in range(N - 1):
    b += X * r
    r += b
    b *= Y
print(b)
