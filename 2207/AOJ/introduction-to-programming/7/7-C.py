import sys

r, c = map(int, sys.stdin.readline().split())
seat = []
[seat.append(
    list(map(int, sys.stdin.readline().split()))
) for _ in range(r)]

[seat[i].append(
    sum(row)
) for i, row in enumerate(seat)]

column_totals = []

for i in range(c + 1):
    column_total = 0
    for row in seat:
        column_total += row[i]
    column_totals.append(column_total)

seat.append(column_totals)

[print(*row) for row in seat]
