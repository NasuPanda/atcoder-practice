#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<ll,ll>> students(N);
    vector<pair<ll,ll>> checkpoints(M);
    ll a,b,c,d;
    rep(i,0,N) {cin>>a>>b; students[i]=make_pair(a,b);}
    rep(i,0,M) {cin>>c>>d; checkpoints[i]=make_pair(c,d);}
    vector<int> ans(N);

    rep(i, 0, N) {
        pair<ll, ll> student = students[i];
        ll manhattanDistance, minDis=infl;
        int tmp;
        for(int j=M-1; j>=0; --j) {
            pair<ll, ll> checkpoint = checkpoints[j];
            manhattanDistance = abs(student.first - checkpoint.first) + abs(student.second - checkpoint.second);
            if (minDis >= manhattanDistance) {
                tmp = j;
                minDis = manhattanDistance;
            }
        }
        ans[i] = tmp+1;
    }
    rep(i,0,N) cout<<ans[i]<<endl;
    return 0;
}
