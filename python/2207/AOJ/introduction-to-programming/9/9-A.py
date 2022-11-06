from re import T


counter = 0
W = input()

while True:
    t = input()
    if t == "END_OF_TEXT":
        break

    for word_in_text in t.split():
        if word_in_text.lower() == W:
            counter += 1

print(counter)
