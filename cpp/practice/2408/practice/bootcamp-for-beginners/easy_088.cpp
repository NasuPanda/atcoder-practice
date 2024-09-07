#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    map<string, int> dict;
    int N, M;
    string s;
    cin >> N;
    rep(i, 0, N) {
        cin >> s;
        dict[s]++;
    }
    cin >> M;
        rep(i, 0, M) {
        cin >> s;
        dict[s]--;
    }
    int ans=0;
    for (const auto & [key, value] : dict) {
        chmax(ans, value);
    }
    cout << ans << endl;
    return 0;
}
