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
    vector<string> S;
    char BOMB = '#', EMPTY = '.';
    string empty; rep(i, 0, W+2) empty.push_back(' ');
    S.push_back(empty);
    rep(i, 0, H) {
        string s;
        cin >> s;
        s.insert(s.begin(), ' ');
        s.push_back(' ');
        S.push_back(s);
    }
    S.push_back(empty);

    rep(h, 1, H+1) {
        rep(w, 1, W+1) {
            int sum=0;
            if (S[h][w] == EMPTY) {
                for(int i=-1; i<=1; ++i) {
                    for (int j=-1; j<=1; ++j) {
                        if (S[h+i][w+j] == BOMB) sum++;
                    }
                }
                S[h][w] = sum + '0';
            }
            cout << S[h][w];
        }
        cout << endl;
    }
    return 0;
}
