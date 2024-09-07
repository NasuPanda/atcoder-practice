#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    vector<int> A(N); rep(i, 0, N) cin >> A[i];
    int SKIP_FLAG = -1;
    int ans=0;
    rep(i, 0, N) {
        int a = A[i];
        if (a == SKIP_FLAG) {}
        else {
            a--;
            if (A[a] == i+1) {
                ans++;
                A[i]=SKIP_FLAG;
                A[a]=SKIP_FLAG;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
