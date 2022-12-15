#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc061/tasks/abc061_b

int main() {
    int N,M; cin >> N >> M;
    vector<int> A(M), B(M);
    rep(i, M) {
        cin >> A.at(i) >> B.at(i);
    }

    for(int i=1; i<=N; i++) {
        cout << count(A.begin(), A.end(), i) + count(B.begin(), B.end(), i) << endl;
    }

    return 0;
}
