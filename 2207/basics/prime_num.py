# 素数: prime number
# 素数判定
def is_prime(n: int):
    if n < 0:
        raise ValueError("[ERROR] parameter must be not less than 0 (n >= 0)")

    if n == 0 or n == 1:
        return 0
    for i in range(2, n + 1):
        # √N以下まで見ればいい。i*iとして比較するのは小数を扱いたくないため。
        if i * i > n:
            return 1
        if n % i == 0:
            return 0


count = 0
n = int(input())
for _ in range(n):
    count += is_prime(int(input()))
print(count)
