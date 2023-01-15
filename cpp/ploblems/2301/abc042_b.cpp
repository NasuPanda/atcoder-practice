#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, L;
    cin >> N >> L;
    vector<string> S(N);
    rep(i,N) cin >> S.at(i);

    // rep(i,3) cout << S.at(i) << endl;
    sort(S.begin(), S.end());
    // rep(i,3) cout << S.at(i) << endl;

    rep(i, N) cout << S.at(i);

	return 0;
}
