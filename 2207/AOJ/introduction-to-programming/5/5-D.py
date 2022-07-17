n = int(input())
# 先頭に空白を出力
print(" ", end="")

for i in range(1, n + 1):
    if i % 3 == 0:
        print(i, end=" ")
    elif "3" in str(i):
        print(i, end=" ")
