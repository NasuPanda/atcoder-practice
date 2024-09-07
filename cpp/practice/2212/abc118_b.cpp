#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc118/tasks/abc118_b
// 簡単

int main() {
    int N,M; cin >> N >> M;
    vector<int> counter(M); rep(i,M) counter.at(i) = 0;

    int K,A;
    rep(i, N) {
        cin >> K;
        // cout << "K " << K << ' ';
        rep(j, K) {
            cin >> A;
            A--;
            counter.at(A)++;
            // cout << "A " << A << ' ';
        }
        // cout << endl;
    }

    int ans=0;
    rep(i,M) {
        // cout << counter.at(i) << ' ';
        if(counter.at(i) == N) ans++;
    }
    cout << ans;
    return 0;
}
