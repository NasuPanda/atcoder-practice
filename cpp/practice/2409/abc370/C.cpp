#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string s, t; cin >> s >> t;
    int n=(int)s.size(), m=0;
    rep(i,0,n) if (s[i] != t[i]) m++;
    cout << m << endl;

    bool isSwapped = false;
    rep(i,0,m) {
        rep(j,0,n) {
            if (s[j] > t[j]) {
                s[j] = t[j];
                cout << s << endl;
                isSwapped = true;
                break;
            }
        }
        if (!isSwapped) {
            for(int j=n-1; j>=0; --j) {
                if (s[j] != t[j]) {
                    s[j] = t[j];
                    cout << s << endl;
                }
            }
        }
        isSwapped = false;
    }

    return 0;
}
