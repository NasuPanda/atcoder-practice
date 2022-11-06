# 与えられた数字3つをソートして空白区切りで出力
numbers = list(map(int, input().split()))
print(*sorted(numbers))
