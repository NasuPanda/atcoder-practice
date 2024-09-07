def can_pay(N, X, coin_types, coin_counts):
    # dp[i][j]は、i円支払うために必要な最小枚数を格納する配列
    dp = [[float('inf')] * (X + 1) for _ in range(N + 1)]
    dp[0][0] = 0

    for i in range(1, N + 1):
        for j in range(coin_types[i-1], X + 1):
            for k in range(coin_counts[i-1] + 1):
                if j - k * coin_types[i-1] >= 0:
                    if dp[i-1][j - k * coin_types[i-1]] + k < dp[i][j]:
                        dp[i][j] = dp[i-1][j - k * coin_types[i-1]] + k
                    if dp[i][j] != float('inf') and dp[i][j] <= coin_counts[i-1]:
                        continue
                    else:
                        dp[i][j] = float('inf')
    return dp[N][X] <= sum(coin_counts)

# 使用例
N = 2
X = 19
coin_types = [2,3]
coin_counts = [5,6]

if can_pay(N, X, coin_types, coin_counts):
    print("Can pay.")
else:
    print("Can't pay.")
