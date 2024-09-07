#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc141/tasks/abc141_c
// 普通にやるとTLEするので工夫が必要。正解者のみ+1、最後に一律で-Qするか。

int main() {
    int N,K,Q; cin >> N >> K >> Q;
    vector<int> scores(N); rep(i,N) scores.at(i) = K;

    int A;
    rep(_, Q) {
        cin >> A;
        scores.at(A-1)++;
    }

    rep(i,N) {
        if (scores.at(i) - Q >= 1) cout << "Yes";
        else cout << "No";
        cout << endl;
    }

    return 0;
}
