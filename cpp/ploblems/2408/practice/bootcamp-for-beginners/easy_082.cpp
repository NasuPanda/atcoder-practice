#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    ll Q, H, S, D, N;
    cin >> Q >> H >> S >> D;
    cin >> N;
    ll ans = 0;
    if (N % 2 == 1) {
        ll minOneLiterPrice = min(4 * Q, 2 * H);
        minOneLiterPrice = min(minOneLiterPrice, S);
        ans += minOneLiterPrice;
        N--;
    }
    ll minTwoLiterPrice = min(8 * Q, 4 * H);
    minTwoLiterPrice = min(minTwoLiterPrice, 2 * S);
    minTwoLiterPrice = min(minTwoLiterPrice, D);
    ans += (N / 2) * minTwoLiterPrice;
    cout << ans << endl;
    return 0;
}
