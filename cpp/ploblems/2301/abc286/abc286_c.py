def min_cost(S, A, B):
    n = len(S)
    cost = 0
    l, r = 0, n - 1
    while l < r:
        if S[l] == S[r]:
            l += 1
            r -= 1
        elif S[l] != S[r]:
            if S[l + 1] == S[r]:
                cost += A
                l += 1
            elif S[l] == S[r - 1]:
                cost += A
                r -= 1
            else:
                cost += B
                l += 1
                r -= 1
    return cost


S = "rrefa"
A = 1
B = 2
print(min_cost(S, A, B))
