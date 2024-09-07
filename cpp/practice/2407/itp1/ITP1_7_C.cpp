#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int r, c;
    cin >> r >> c;
    int table[r+1][c+1];
    rep(i, r) {
        rep(j, c) {
            cin >> table[i][j];
        }
    }

    int sum=0;

    rep(i, r) {
        rep(j, c) {
            sum+=table[i][j];
        }
        table[i][c] = sum;
        sum=0;
    }

    rep(i, c) {
        rep(j, r) { sum+=table[j][i]; }
        table[r][i] = sum;
        sum=0;
    }

    rep(i, r) {
        sum+=table[i][c];
    }
    table[r][c] = sum;

    rep(i, r+1) {
        rep(j, c+1) {
            if (j == c) {
                cout << table[i][j] << endl;
            } else {
            cout << table[i][j] << " ";
            }
        }
    }

    return 0;
}
