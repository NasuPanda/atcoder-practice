#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc140/tasks/abc140_c
// かんたん

int main() {
    int N; cin >> N;
    vector<int> B(N-1); rep(i,N-1) cin >> B.at(i);
    vector<int> A(N); rep(i,N) A.at(i) = 1000000;

    for(int i=0; i<N-1; i++) {
        int b = B.at(i);
        if (A.at(i) > b) A.at(i) = b;
        if (A.at(i+1) > b) A.at(i+1) = b;
    }

    int ans=0;
    rep(i,N) ans+=A.at(i);
    cout << ans;

    return 0;
}
