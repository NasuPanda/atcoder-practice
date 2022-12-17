#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
    int N,M; cin >> N >> M;
    vvi data(N, vi(M));
    rep(n, N) {
        rep(m, M) {
            char Sm; cin >> Sm;
            // 正解
            if (Sm == 'o') data.at(n).at(m) = 1;
            // 不正解
            else data.at(n).at(m) = 0;
        }
    }

    bool isOk = true;
    int ans=0;
    for (int y=1; y<N; y++) {
        for (int x=0; x<y; x++) {
            // cout << " X is " << x << " Y is " << y << endl;
            rep(i, M) {
                if (!(data.at(x).at(i) or data.at(y).at(i))) isOk=false;
                // cout << data.at(x).at(i) << ' ' << data.at(y).at(i) << "    ";
            }
            // cout << "This pair is " << isOk << endl;
            if (isOk) ans++;
            isOk = true;
        }
    }
    cout << ans;

    return 0;
}
