#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_integer(double x) {
    return floor(x)==x;
}

int main() {
    int N, D;
    cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D));
    rep(i, N) {
        rep(j, D) {
            cin >> X[i][j];
        }
    }
    int ans=0;
    rep(i, N) {
        for (int j=i+1; j<N; ++j) {
            double distance=0;
            rep(k, D) {
                distance+=pow(X[i][k]-X[j][k], 2);
            }
            distance = sqrt(distance);
            if (is_integer(distance)) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
