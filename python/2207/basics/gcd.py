# GCD: greatest common divisor
# 最大公約数を求める。
def get_gcd(x, y):
    """
    ユークリッドの互除法により最大公約数を求める。
    「x>=yのとき、gcd(x, y)とgcd(y, xをyで割った余り)は等しい」
    """
    # y=０の時のxの値が最大公約数となる。
    while y > 0:
        r = x % y
        x = y
        y = r
    return x


x, y = map(int, input().split())
if y >= x:
    y, x = x, y
print(get_gcd(x, y))
