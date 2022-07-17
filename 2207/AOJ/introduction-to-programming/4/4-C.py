import sys

# a, op(演算子), b が渡される。評価した結果を出力する。
# op=?のとき終了。

while True:
    input = (sys.stdin.readline())
    if input.split()[1] == "?":
        break
    print(int(eval(input)))
