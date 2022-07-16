# 大文字小文字変換
# is〇〇 で判定、〇〇 methodで変換
ch = "example string"
if ch.islower():
    ch.upper()
elif ch.isupper():
    ch.lower()

# もしくはswapcaseを使う
str = "Hello, World!"
print(str.swapcase())   # hELLO, wORLD!
