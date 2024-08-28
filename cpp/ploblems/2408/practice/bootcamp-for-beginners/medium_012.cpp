#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H);
    rep(i,0,H) cin >> A[i];

    // TODO 別解
    vector<bool> rows(H, false), columns(W, false);
    rep(h, 0, H) {
        rep(w, 0, W) {
            if (A[h][w] == '#') {
                rows[h] = true;
                columns[w] = true;
            }
        }
    }
    bool isPrinted=false;
    rep(h, 0, H) {
        isPrinted = false;
        rep(w, 0, W) {
            if (rows[h] & columns[w]) {
                cout << A[h][w];
                isPrinted = true;
            }
        }
        if (isPrinted) cout << endl;
    }

    // int whiteCount;

    // rep(h, 0, H) {
    //     whiteCount=0;
    //     rep(w, 0, W) {
    //         if (A[h][w] == '.' || A[h][w] == ' ') whiteCount++;
    //     }
    //     if (whiteCount == W) {
    //         rep(w, 0, W) A[h][w] = ' ';
    //     }
    // }
    // rep(w, 0, W) {
    //     whiteCount=0;
    //     rep(h, 0, H) {
    //         if (A[h][w] == '.' || A[h][w] == ' ') whiteCount++;
    //     }
    //     if (whiteCount == H) {
    //         rep(h, 0, H) A[h][w] = ' ';
    //     }
    // }

    // int emptyCount;
    // rep(h, 0, H) {
    //     emptyCount=0;
    //     rep(w, 0, W) {
    //         if (A[h][w] == ' ') emptyCount++;
    //     }
    //     if (emptyCount != W) {
    //         rep(w, 0, W) {
    //             if (A[h][w] != ' ') cout << A[h][w];
    //         }
    //         cout << endl;
    //     }
    // }

    return 0;
}
