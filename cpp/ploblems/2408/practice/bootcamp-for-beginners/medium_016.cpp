#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    int sum=0;
    vector<int> S(N); rep(i,0,N) {int s; cin >> s; S[i]=s; sum+=s;}
    int ans=0;
    if (sum % 10 != 0) ans = sum;
    else {
        sort(all(S));
        for (auto s : S) {
            if ((sum - s) % 10 != 0) {
                ans = sum - s;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
