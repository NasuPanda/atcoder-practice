#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    ll H, W;
    cin >> H >> W;
    ll area = H * W;
    if (H == 1 || W == 1) cout << 1 << endl;
    else if (area % 2 == 0) cout << area / 2 << endl;
    else cout << area / 2 + 1 << endl;
    return 0;
}