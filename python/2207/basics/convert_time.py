# s => H, m, s に変換
s = int(input())
# %  余り
# // 割り算(余りは切り捨て)
h = s // 3600
m = s % 3600 // 60
s = s % 60
print(f"{h}:{m}:{s}")
