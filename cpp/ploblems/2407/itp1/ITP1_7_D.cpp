#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    long long A[n][m], B[m][l], C[n][l];
    rep(i, n) {
        rep(j, m) {
            cin >> A[i][j];
        }
    }
    rep(i, m) {
        rep(j, l) {
            cin >> B[i][j];
        }
    }

    long long tmp = 0;
    rep(i, n) {
        rep(j, l) {
            rep(k, m) {
                tmp += A[i][k] * B[k][j];
            }
            C[i][j] = tmp;
            tmp = 0;
        }
    }

    rep(i, n) {
        rep(j, l) {
            if (j == l-1) { cout << C[i][j] << endl; }
            else { cout << C[i][j] << " "; }
        }
    }

    return 0;
}
