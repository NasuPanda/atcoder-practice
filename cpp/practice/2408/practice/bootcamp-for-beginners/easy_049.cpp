#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    rep(i, W+2) cout << '#';
    cout << endl;

    rep(i, H) {
        cout << '#';
        string a;
        cin >> a;
        cout << a;
        cout << '#' << endl;
    }

    rep(i, W+2) cout << '#';
    cout << endl;
    return 0;
}
