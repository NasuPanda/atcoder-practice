# N×Mの行列とM×Lの行列の積(N×L)を求める。
# 行列の積: 行方向要素に列方向要素を掛ける。 (N×M)×(M×L)=(N×L)になる。

N, M, L = map(int, input().split())
A = [list(map(int, input().split())) for i in range(N)]
B = [list(map(int, input().split())) for i in range(M)]
# 空の行列を作成
C = [[0] * L for i in range(N)]

# 行列AはN方向(行方向)に動く
for n in range(N):
    # 行列BはL方向(列方向)に動く
    for l in range(L):
        # 各行/列でM回分足せば良い。
        C[n][l] = (sum(A[n][k] * B[k][l] for k in range(M)))
for line in C:
    print(*line)
