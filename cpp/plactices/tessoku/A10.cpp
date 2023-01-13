#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N, D;
int A[100009], L[100009], R[100009];
// Max累積和用
int P[100009], Q[100009];

int main() {
    cin >> N;
    for (int i=1; i<=N; i++) cin >> A[i];
    cin >> D;
    for (int i=1; i<=D; i++) cin >> L[i] >> R[i];

    // Pを求める
    P[1] = A[1];
    for (int i=2; i<=N; i++) P[i] = max(P[i-1], A[i]);

    // Qを求める
    Q[N] = A[N];
    for (int i=N-1; i>=1; i--) Q[i] = max(Q[i+1],A[i]);

    // 答えを求める
    for (int d=1; d<=D; d++) {
        cout << max(P[L[d]-1], Q[R[d]+1]) << endl;
    }

	return 0;
}
