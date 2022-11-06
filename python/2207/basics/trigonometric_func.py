# 三角関数基礎
# 辺a, b 角C が与えられた時に面積S, 残る辺c, 高さhを求める。
from math import sin, cos, pi, sqrt

a, b, C = map(int, input().split())

# NOTE: 入力が度で与えられているため、ラジアンに変換する必要がある。

# 斜辺 * sinθ = 高さ(垂直な線)
S = a*b*sin(C*pi/180)/2
# cosX = a2乗*b2乗-x2乗 / 2ab
#    x = a2乗*b2乗 - 2ab*cosθ
c = sqrt(a**2 + b**2 - 2*a*b*cos(C*pi/180))

h = 2*S/a