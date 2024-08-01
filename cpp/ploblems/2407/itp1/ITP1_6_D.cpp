#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m], b[m], c[n];

    rep(i, n) {
        rep(j, m) {
            cin >> a[i][j];
        }
    }
    rep(i, m) {
        cin >> b[i];
    }

    int tmp;
    rep(i, n) {
        tmp=0;
        rep(j, m) {
            tmp += a[i][j] * b[j];
        }
        c[i] = tmp;
    }

    rep(i, n) {
        cout << c[i] << endl;
    }
    return 0;
}
