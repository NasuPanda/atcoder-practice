# N×Mの行列とM×Lの行列の積(N×L)を求める。

N, M, L = map(int, input().split())
A = [list(map(int, input().split())) for i in range(N)]
B = [list(map(int, input().split())) for i in range(M)]
# 空の行列を作成しておき、値を代入する
C = [[0]*L for i in range(N)]

for i in range(N):
    for j in range(L):
				# N, Lは等しい。
				# 各行/列でM回分足せば良い。
        C[i][j] = (sum(A[i][k]*B[k][j] for k in range(M)))
for line in C:
    print(*line)