#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> preferences(M);
    rep(i, N) {
        int K;
        cin >> K;
        rep(j, K) {
            int A;
            cin >> A;
            preferences.at(A-1)++;
        }
    }
    int ans=0;
    for (auto p : preferences) if (p==N) ans++;
    cout << ans << endl;
    return 0;
}
