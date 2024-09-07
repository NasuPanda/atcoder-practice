#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc152/tasks/abc152_c
// 苦手

int main() {
    int N; cin >> N;
    int Pi, PMin=2000000, ans=0;

    rep(i, N) {
        cin >> Pi;
        if (PMin > Pi) PMin = Pi;
        if (Pi <= PMin) ans++;
        // cout << "Pi: " << Pi << " Min(P1~i):" << PMin << endl;
    }
    cout << ans;
    return 0;
}
