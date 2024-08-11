#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long N, K, Q; cin >> N >> K >> Q;
    vector<long long> scores(N);
    int a;
    rep(i, Q) {
        cin >> a;
        scores[a-1]++;
    }
    for (auto s : scores) {
        if (s + K - Q <= 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
