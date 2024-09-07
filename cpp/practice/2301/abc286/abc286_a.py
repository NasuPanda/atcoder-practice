N, P, Q, R, S = map(int, input().split())
A = list(map(int, input().split()))
A.insert(0, 1000000)

if not(P == 1):
    for i in A[1:P]:
        print(i, end=" ")
for i in A[R:S+1]:
    print(i, end=" ")
for i in A[Q+1:R]:
    print(i, end=" ")
for i in A[P:Q+1]:
    print(i, end=" ")
for i in A[S+1:]:
    print(i, end=" ")


# if not(P == 1):
#     print(*A[1:P], end=" ")
# print(*A[R:S+1], end=" ")
# print(*A[Q+1:R], end=" ")
# print(*A[P:Q+1], end=" ")
# print(*A[S+1:], end=" ")
