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
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];
    ll ans=0;
    rep(i, 0, 1000000) {
        sort(A.rbegin(), A.rend());
        A[0]--;
        A[1]--;
        ans++;
        int posCount=0;
        rep(i, 0, N) {
            if(A[i]>0) posCount++;
            // cout << A[i] << " ";
        }
        // cout << endl;
        if (posCount <= 1) break;
    }
    cout << ans;
    return 0;
}
