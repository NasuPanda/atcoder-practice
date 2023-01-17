#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    vector<int> A(N); rep(n, N) cin >> A[n];
    int Q; cin >> Q;
    vector<int> X(Q); rep(q, Q) cin >> X[q];

    // ソートしておく
    sort(A.begin(), A.end());

    rep(q, Q) {
        int x = X[q];
        auto iter = lower_bound(A.begin(), A.end(), x);
        cout << iter - A.begin() << endl;
    }
	return 0;
}
