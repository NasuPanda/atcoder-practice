s = input()
if len(set(s)) == 1:
    print(-1)
else:
    if s[0] == s[1]:
        print(s[2])
    elif s[1] == s[2]:
        print(s[0])
    elif s[2] == s[0]:
        print(s[1])
    else:
        print(s[0])