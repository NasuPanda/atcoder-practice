#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, K; cin >> N >> K;
    vector<int> count(200001);
    set<int> _count;
    rep(i, 0, N) {int a; cin >> a; _count.insert(a); count[a]++;}
    int ballTypes = _count.size();
    sort(all(count));

    ll ans=0;
    int index=1;
    while(ballTypes > K) {
        if (count[index] != 0) {
            ans+= count[index];
            ballTypes--;
        }
        index++;
    }
    cout << ans << endl;
    return 0;
}
