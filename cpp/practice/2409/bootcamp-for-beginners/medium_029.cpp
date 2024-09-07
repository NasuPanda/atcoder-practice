#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string s, t; cin >> s >> t;
    sort(all(s));
    sort(t.rbegin(), t.rend());
    // cout << s << endl << t << endl;
    int n = s.size(), m = t.size();
    string ans;
    rep(i,0,min(n,m)) {
        if (s[i] < t[i]) {
            cout << "Yes" << endl;
            return 0;
        } else if (s[i] > t[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    if (n < m) cout << "Yes" << endl;
    else cout << "No" << endl;
    // if (n < m) {
    //     rep(i,0,n) {
    //         if (s[i] < t[i]) {
    //             cout << "No" << endl;
    //             return 0;
    //         } else if ()
    //     }
    //     cout << "Yes" << endl;
    // }
    // else {
    //     rep(i,0,m) {
    //         if (s[i] < t[i]) {
    //             cout << "Yes" << endl;
    //             return 0;
    //         } else if (s[i] > t[i]) {
    //             cout << "No" << endl;
    //             return 0;
    //         }
    //     }
    //     cout << "No" << endl;
    // }
    return 0;
}
