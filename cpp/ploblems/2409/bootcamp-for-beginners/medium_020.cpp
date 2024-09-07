#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    vector<ll> A(N); rep(i,0,N) cin>>A[i];

    set<int> s;
    for (auto a : A) {
        if (s.count(a)) s.erase(a);
        else s.insert(a);
    }
    cout << s.size() << endl;

    // sort(all(A));

    // int ans=0;
    // int count=0;
    // ll prev=A[0];
    // ll current;
    // rep(i, 1, N) {
    //     current = A[i];
    //     if (current == prev) count++;
    //     else {
    //         if (count % 2 == 1) {}
    //         else ans++;
    //         count = 0;
    //     }
    //     prev = current;
    // }
    // if ((current == prev) & (count % 2 == 0)) ans++;
    // cout << ans << endl;
    return 0;
}
