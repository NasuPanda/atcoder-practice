# 入力されたS(秒)をh:m:s形式に変換
S = int(input())
h = S // 3600
m = (S - h * 3600) // 60
s = S - h * 3600 - m * 60
print(f"{h}:{m}:{s}")
