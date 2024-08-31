#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    vector<int> c(9); rep(i,0,9) cin>>c[i];
    // Let a1=0. Then, from the definition...
    int b1=c[0], b2=c[1], b3=c[2];
    int a2=c[3]-b1, a3 = c[6]-b1;
    string ans = "Yes";
    if (!(c[4] == a2 + b2)) ans = "No";
    if (!(c[5] == a2 + b3)) ans = "No";
    if (!(c[7] == a3 + b2)) ans = "No";
    if (!(c[8] == a3 + b3)) ans = "No";
    cout << ans << endl;
    return 0;
}
