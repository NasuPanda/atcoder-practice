#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin>>N;
    vector<int> A(N);
    vector<int> P(N), Q(N);
    rep(i, 0, N) cin >> P[i];
    rep(i, 0, N) cin >> Q[i];
    // rep(i, 0, N) A[i] = i+1;
    iota(all(A), 1);
    int a, b, count=0;
    do {
        count++;
        // rep (i, 0, N) cout << A[i] << " ";
        if (A == P) a = count;
        if (A == Q) b = count;
    } while (next_permutation(all(A)));
    cout << abs(a - b) << endl;
    return 0;
}
