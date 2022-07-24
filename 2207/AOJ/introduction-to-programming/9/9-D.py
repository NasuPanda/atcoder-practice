import sys

s = input()
n = int(sys.stdin.readline())

for _ in range(n):
    query = sys.stdin.readline().split()

    # 対象範囲をプリントする
    if query[0] == "print":
        _, a, b = query
        # スライスの仕様上実際の値より+1する
        a, b = int(a), int(b) + 1
        print(s[a:b])

    # 対象範囲を反転させる
    if query[0] == "reverse":
        _, a, b = query
        # スライスの仕様上実際の値より+1する
        a, b = int(a), int(b) + 1
        s = s[:a] + s[a:b][::-1] + s[b:]

    # 対象範囲をpに置き換える
    if query[0] == "replace":
        _, a, b, p = query
        # スライスの仕様上実際の値より+1する
        a, b = int(a), int(b) + 1
        s = s[:a] + p + s[b:]
