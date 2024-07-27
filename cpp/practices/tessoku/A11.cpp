#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 素朴な実装
// int binarySearch(int X, vector<int> A) {
//     int L = 0, R = A.size();

//     while (L<=R) { // 探索範囲が無くなるまで
//         int M = (L + R) / 2;
//         if (X < A.at(M)) R = M - 1;
//         if (X > A.at(M)) L = M + 1;
//         if (X == A.at(M)) return M;
//     }
//     // 存在しない
//     return -1;
// }

int binarySearch(int x, vector<int> A) {
    int N = A.size() + 1;
    auto iter = lower_bound(A.begin(), A.end(), x);
    int pos = distance(A.begin(), iter);
	// int pos = lower_bound(A+1, A+N+1, x) - A;
	if (pos <= N && A[pos] == x) return pos;
	return -1;
}

int main() {
    int N, X; cin >> N >> X;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    cout << binarySearch(X, A) + 1 << endl;

	return 0;
}
