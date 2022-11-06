while True:
    m, f, r = map(int, input().split())
    if m == f == r == -1:
        break

    if m == -1 or f == -1:
        print("F")
        continue

    total = m + f

    if 80 <= total:
        print("A")
    elif 65 <= total < 80:
        print("B")
    elif 50 <= total < 65:
        print("C")
    elif 30 <= total < 50:
        if 50 <= r:
            print("C")
        else:
            print("D")
    else:
        print("F")
