#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    if ((B - A)% 2 == 0) cout << (B - A) / 2 << endl;
    else cout << min(A-1, N-B) + 1 + (B - A - 1) / 2 << endl;
    return 0;
}
