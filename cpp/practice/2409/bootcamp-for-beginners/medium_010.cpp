#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin>>N;
    vector<int> a(N); rep(i,0,N) {cin>>a[i];}
    vector<int> count(100005);
    rep(i,0,N) {
        int val = a[i];
        if (val-1 >= 0) count[val-1]++;
        count[val]++;
        count[val+1]++;
    }
    sort(all(count));
    cout << count[100004] << endl;
    return 0;
}