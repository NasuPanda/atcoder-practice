import sys


S = sys.stdin.read()
counter = {}
for i in range(97, 123):
    counter[chr(i)] = 0

for s in S:
    if s.isalpha():
        counter[s.lower()] += 1

[print(f"{k} : {v}") for k, v in counter.items()]
