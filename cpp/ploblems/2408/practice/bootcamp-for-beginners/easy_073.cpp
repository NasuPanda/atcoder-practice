#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i())
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string N; cin >> N;
    int K = N.size();
    int c = N[0] - '0';
    for (int i=1; i<K; ++i) {
        if(N[i]!='9') {
            cout << 9 * (K - 1) + (c - 1) << endl;
            return 0;
        }
    }
    cout << 9 * (K - 1) + c << endl;
    return 0;
}
