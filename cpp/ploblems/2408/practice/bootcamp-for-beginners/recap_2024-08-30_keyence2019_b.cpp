#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string TARGET = "keyence";
    string s; cin >> s;
    if (s == TARGET) {cout<<"YES"<<endl; return 0;}
    int n = s.size();
    rep(i, 0, n) {
        rep(j, i, n) {
            string result;
            rep(k, 0, n) {
                if (i <= k & k <= j) continue;
                else result.push_back(s[k]);
            }
            if (result == TARGET) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
