# 標準偏差 (分散の平方根)
import math

n = int(input())
scores = list(map(int, input().split()))

# 分散 => Σ((平均-値X)**2) / n (平均-xの総和 ÷ n)
average = sum(scores) / n
temp_sum = 0
for i in scores:
    temp_sum += (average - i)**2

print(math.sqrt(temp_sum / n))