#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int H, W; cin >> H >> W;
    vector<string> S(H+2);
    string gap; rep(i, 0, W+2) gap.push_back('.');
    S[0] = gap;
    S[H+1] = gap;
    rep(i, 1, H+1) {
        string s; cin >> s;
        S[i].push_back('.');
        for (auto c : s) S[i].push_back(c);
        S[i].push_back('.');
    }
    string ans = "Yes";
    rep(h, 1, H+1) {
        rep(w, 1, W+1) {
            if (S[h][w] == '#') {
                if ((S[h-1][w] == '.' & S[h+1][w] == '.' & S[h][w-1] == '.' & S[h][w+1] == '.')) ans = "No";
            }
        }
    }
    cout << ans << endl;
    return 0;
}
