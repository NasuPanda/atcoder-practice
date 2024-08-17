#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (B < C) {
        for (int i=B; i<=C; ++i) {
            // cout << "1; " << i << endl;
            if (A == i) {
                cout << "No" << endl;
                return 0;
            }
        }
    } else {
        for (int i=B; i<=24; ++i) {
            // cout << "2; " << i << endl;
            if (A==i) {
                cout << "No" << endl;
                return 0;
            }
        }
        for (int i=0; i<=C; ++i) {
            // cout << "3; " << i << endl;
            if (A==i) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
