a = int(input())  # 500
b = int(input())  # 100
c = int(input())  # 50
x = int(input())  # 合計金額

count = 0

for i_500 in range(a+1):
    for i_100 in range(b+1):
        for i_50 in range(c+1):
            total = 500*i_500 + 100*i_100 + 50*i_50
            if total == x:
                count += 1

print(count)