#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N;
    cin >> N;
    vector<pair<int, char>> piano(N);
    rep(i,0,N) {int n; char c; cin>>n>>c; piano[i] = make_pair(n, c);}

    ll ans=0;
    int lLast=-1, rLast=-1;

    rep(i,0,N) {
        pair<int, char> as = piano[i];
        int a = as.first;
        char hand = as.second;
        if (hand == 'L' && lLast == -1) lLast = a;
        if (hand == 'R' && rLast == -1) rLast = a;

        if (hand == 'L') {
            ans += abs(a - lLast);
            lLast = a;
        } else {
            ans += abs(a - rLast);
            rLast = a;
        }
    }
    cout << ans << endl;
    return 0;
}
