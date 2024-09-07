#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (auto &x : a) cin >> x;
    int ans = 0;
    int numberOfBlock = 1;
    for (auto x : a) {
        if (x == numberOfBlock) numberOfBlock++;
        else ans++;
    }
    if (numberOfBlock == 1) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
