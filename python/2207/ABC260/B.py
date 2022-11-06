import sys


def get_first_max_index(li):
    max_value = max(li)
    for i, v in enumerate(li):
        if max_value == v:
            return i


n, x, y, z = map(int, sys.stdin.readline().split())
students = []
math_scores = list(map(int, sys.stdin.readline().split()))
en_scores = list(map(int, sys.stdin.readline().split()))

for _ in range(x):
    idx = get_first_max_index(math_scores)
    students.append(idx + 1)
    math_scores[idx] = -1
    en_scores[idx] = -1

for _ in range(y):
    idx = get_first_max_index(en_scores)
    students.append(idx + 1)
    math_scores[idx] = -1
    en_scores[idx] = -1

total = []
for m, e in zip(math_scores, en_scores):
    total.append(m + e)

for _ in range(z):
    idx = get_first_max_index(total)
    students.append(idx + 1)
    total[idx] = -1

[print(i) for i in sorted(students)]