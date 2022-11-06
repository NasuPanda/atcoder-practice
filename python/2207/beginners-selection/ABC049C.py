import math


s = input()
strings = ["dream", "dreamer", "erase", "eraser"]
max_divide = math.ceil(len(s) / 5)

for _ in range(max_divide):
    for i in strings:
        if s.endswith(i):
            s = s[:(len(s) - len(i))]
            if s == "":
                print("YES")
                exit()

print("NO")