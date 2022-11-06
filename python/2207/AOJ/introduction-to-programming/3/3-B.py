import sys


# 普通に解く
li = []
while True:
    n = int(sys.stdin.readline())
    if n == 0:
        break
    li.append(n)

for i, v in enumerate(li, start=1):
    print(f"Case {i}: {v}")


# iterを使う
for i, e in enumerate(
    iter(sys.stdin.readline, "0\n"),
    start=1
):
    print(f"Case {i}: {e.rstrip()}")
