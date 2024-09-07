#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, K; cin >> N >> K;
    vector<long long> h(N); rep(i,N) cin >> h[i];

    sort(h.begin(), h.end());

    long long ans=10000000009;
    for (int i=0; i+K-1<N; i++) {
        ans = min(ans, h[i+K-1] - h[i]);
    }
    cout << ans;

	return 0;
}
