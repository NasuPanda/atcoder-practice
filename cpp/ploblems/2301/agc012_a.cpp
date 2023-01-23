#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 3N人いる
// まずは降順にソートする
// チームメンバーは、{max, 2番目max, 適当な値}になれば良いため、max(加算しない)→max(加算する)→max(加算しない)…

int main() {
    long long N; cin >> N;
    vector<long long> a(3*N); rep(i,3*N) cin >> a[i];

    sort(a.begin(), a.end(), greater<long long>());

    long long ans=0;
    rep(i, 2*N) if (i & 1) ans += a[i];

    cout << ans;

	return 0;
}
