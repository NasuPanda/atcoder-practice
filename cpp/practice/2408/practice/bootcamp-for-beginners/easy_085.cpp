#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int D, N;
    cin >> D >> N;
    ll ans;
    switch (D)
    {
    case 0:
        if (N == 100) N++;
        ans = N;
        break;
    case 1:
        if (N == 100) N++;
        ans = 100 * N;
        break;
    case 2:
        if (N == 100) N++;
        ans = 100 * 100 * N;
        break;
    }
    cout << ans << endl;
    return 0;
}
