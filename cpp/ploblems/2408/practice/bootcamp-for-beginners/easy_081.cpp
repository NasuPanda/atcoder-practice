#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int howManyTwo(ll x) {
    int ans=0;
    while(x % 2 == 0 && x >= 2) {
        ans++;
        x /= 2;
    }
    return ans;
}

int main() {
    // Count the number of 2 as factor
    int N;
    cin >> N;
    int ans=0;
    rep(i, 0, N) {
        ll a;
        cin >> a;
        ans += howManyTwo(a);
    }
    cout << ans << endl;
    return 0;
}
