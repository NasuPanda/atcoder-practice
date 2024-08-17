#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

double aveTemp(int T, int x) {
    return T - x * 0.006;
}

int main() {
    int N, T, A;
    cin >> N >> T >> A;

    int ans;
    double minDiff=100000;

    rep(i, N) {
        int H;
        cin >> H;
        double temp = aveTemp(T, H);
        double diff = abs(A - temp);
        if (minDiff > diff) {
            minDiff = diff;
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}
