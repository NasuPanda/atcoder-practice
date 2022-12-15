#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using vi = vector<int>;
using vvi = vector<vi>;

double calcDistance(int d, vector<int> x, vector<int> y) {
    double tmp = 0;
    rep(i, d) {
        tmp += pow(y.at(i) - x.at(i), 2);
    }
    return sqrt(tmp);
}

int main() {
    int N, D; cin >> N >> D;
    vvi X(N, vi(D)); // N * D の2次元配列

    rep(n, N) {
        rep(d, D) cin >> X.at(n).at(d);
    }

    int ans=0;
    rep(i, N) {
        for (int j=0; i>j; j++) {
            if (i != j) {
                double distance = calcDistance(D, X.at(i), X.at(j));
                // 整数ならば
                if (distance == int(distance)) ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
