#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

double f(double x) {
    return pow(x, 3) + x;
}

int main() {
    int N; cin >> N;

    // N<=10^5なので、答えは100以下になる
    double left = 0, right = 100, mid;
    // 範囲を0.001未満にまで絞らなければならない。
    // 範囲の幅は100÷2^20=0.000095…より、20で十分であることが分かる。
    for (int i=0; i<20; i++) {
        mid = (left+right)/2.0;
        double val = f(mid);

        if (val > 1.0 * N) right = mid; // 左半分に絞られる
        else left = mid; // 右半分に絞られる
    }
    cout << fixed << setprecision(12) << mid << endl;
    return 0;
}
