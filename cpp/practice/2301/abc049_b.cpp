#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using vc = vector<char>;
using vvc = vector<vc>;

int H,W;
vvc C(109, vc(109));

int main() {
    cin >> H >> W;
    rep(h, H) {
        rep(w, W) cin >> C[h][w];
    }

    rep(h, H) {
        rep(_, 2) {
            rep(w, W) cout << C[h][w];
            cout << endl;
        }
    }
	return 0;
}
