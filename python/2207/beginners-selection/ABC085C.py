n, yen = map(int, input().split())

for i_10000 in range(n + 1):
    for i_5000 in range(n - i_10000 + 1):
        i_1000 = n - i_10000 - i_5000
        if i_10000 + i_5000 + i_1000 == n and yen == 10000 * i_10000 + 5000 * i_5000 + 1000 * i_1000:
            print(i_10000, i_5000, i_1000)
            exit()
print(-1, -1, -1)
