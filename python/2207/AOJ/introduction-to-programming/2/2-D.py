"""
W, H の長方形の中にx, y, r の円が含まれるか判定
- 一部でもはみ出ればアウト
- 左下が(0, 0)
"""
W, H, X, Y, R = map(int, input().split())

t = Y + R
b = Y - R
r = X + R
l = X - R

if t <= H and b >= 0 and r <= W and l >= 0:
    print("Yes")
else:
    print("No")
