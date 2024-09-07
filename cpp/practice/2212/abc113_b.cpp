#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,T,A; cin >> N >> T >> A;
    int h, ans;
    double minDiff = 10000.0;

    rep(i, N) {
        cin >> h;
        double averageTemperature = T - h * 0.006;
        double diff = abs(A - averageTemperature);
        if (diff < minDiff) {
            ans = i + 1; // 番号なので +1
            minDiff = diff;
        }
    }
    cout << ans;
    return 0;
}
