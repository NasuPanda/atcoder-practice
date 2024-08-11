#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    int L, R;
    int lMax=0, rMin=10e6;
    rep(i, M) {
        cin >> L >> R;
        lMax = max(lMax, L);
        rMin = min(rMin, R);
    }
    if (rMin - lMax + 1 < 0) {
        cout << 0 << endl;
    } else {
        cout << rMin - lMax + 1 << endl;
    }
    return 0;
}
