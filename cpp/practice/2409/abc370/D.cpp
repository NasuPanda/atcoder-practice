#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int h, w, q; cin >> h >> w >> q;
    vector<vector<int>> walls(h, vector<int>(w, 1));
    int ans=h*w;
    rep(i, 0, q) {
        int r, c;
        cin >> r >> c;
        r--; c--;

        if (walls[r][c]) {walls[r][c]--; ans--;}
        else {
            for (int j=r-1; j>=0; j--) { if(walls[j][c]) {walls[j][c]--; ans--; break;} }
            for (int j=r+1; j<h; j++)  { if(walls[j][c]) {walls[j][c]--; ans--; break;} }
            for (int j=c-1; j>=0; j--) { if(walls[r][j]) {walls[r][j]--; ans--; break;} }
            for (int j=c+1; j<w; j++)  { if(walls[r][j]) {walls[r][j]--; ans--; break;} }
        }
    }
    // int ans=0;
    // rep(i,0,h) {
    //     rep(j,0,w) {
    //         if (walls[i][j]) ans++;
    //     }
    // }
    cout << ans << endl;

    // DEBUG
    // rep(i,0,h) {
    //     rep(j,0,w) {
    //         cout << walls[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
