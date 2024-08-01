#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    int arr[4][3][10]; // 4 buildings with 3 floors each, which consists of 10 rooms
    rep(i, 4) {
        rep(j, 3) {
            rep(k, 10) {
                arr[i][j][k] = 0;
            }
        }
    }
    cin >> n;

    int b, f, r, v;
    rep(i, n) {
        cin >> b >> f >> r >> v;
        arr[b-1][f-1][r-1] += v;
    }

    rep(i, 4) {
        rep(j, 3) {
            rep(k, 10) {
                cout << " " << arr[i][j][k];
            }
            cout << endl;
        }
        if (i != 3) {
            cout << "####################" << endl;
        }
    }

    return 0;
}
