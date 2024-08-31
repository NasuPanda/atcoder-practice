#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, M; cin >> N >> M;
    vector<pair<int, int>> sc(M);
    rep(i,0,M) {int s,c; cin>>s>>c; sc[i] = make_pair(s,c);}

    rep(_x, 0, 1000) {
        bool isTheNumber = true;
        string x = to_string(_x);
        rep(i, 0, M) {
            int s = sc[i].first;
            char c = sc[i].second + '0';
            s--;
            if (x[s] == c) continue;
            else isTheNumber = false;
        }
        if (x.size() != N) isTheNumber = false;

        if (isTheNumber) {
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
    // int N, M; cin >> N >> M;
    // vector<pair<int, int>> sc(M);
    // rep(i, 0, M) {int s, c; cin >> s >> c; sc[i] = make_pair(s, c);}

    // string ans; rep(i, 0, N) ans.push_back('a');
    // rep(i, 0, M) {
    //     int s = sc[i].first;
    //     char c = to_string(sc[i].second)[0];
    //     // cout << s << " " << c << " " << ans[s-1] << endl;
    //     if (ans[s-1] != 'a') {
    //         if (ans[s-1] != c) {cout << -1 << endl; return 0;}
    //         else continue;
    //     }
    //     else {
    //         ans[s-1] = c;
    //     }
    // }
    // rep(i, 0, N) if(ans[i] == 'a') ans[i] = '0';
    // if (ans[0] == '0' && N > 1) cout << -1 << endl;
    // else cout << ans << endl;
    // return 0;
}
