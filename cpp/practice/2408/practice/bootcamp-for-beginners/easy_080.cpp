#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

bool isInteger(double x) {
    return floor(x) == x;
}

int main() {
    ll N; cin >> N;
    ll minSum = infl;
    for (int i=1; i<=sqrt(N); ++i) {
        double x = (double)N / i;
        // cout << "X is " << x << endl;
        if (isInteger(x)) {
            // cout << i << " * " << N/i << endl;
            minSum = min(minSum, (i + (N/i) - 2));}
    }
    cout << minSum << endl;
    return 0;
}
