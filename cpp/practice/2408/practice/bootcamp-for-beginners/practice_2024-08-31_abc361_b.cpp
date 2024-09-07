#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
    if (d>g && e>h && f>i) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
