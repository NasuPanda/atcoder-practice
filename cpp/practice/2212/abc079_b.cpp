#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc079/tasks/abc079_b
// 割と簡単

int main() {
    int N; cin >> N;
    // 0~N番なので N+1
    vector<long long> L(N+1);

    L.at(0) = 2;
    L.at(1) = 1;

    for (int i=2; i<=N; i++) L.at(i) = L.at(i-1) + L.at(i-2);
    cout << L.at(N);

    return 0;
}
