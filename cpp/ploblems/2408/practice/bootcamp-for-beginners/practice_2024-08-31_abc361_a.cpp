#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, K, X; cin >> N >> K >> X;
    vector<int> A(N); rep(i,0,N) cin>>A[i];
    auto it = A.begin();
    rep(i, 0, N) {
        if (0 < i) cout << " ";
        cout << A[i];
        if (i == K - 1) cout << " " << X;
    }
    cout << endl;
    return 0;
}
