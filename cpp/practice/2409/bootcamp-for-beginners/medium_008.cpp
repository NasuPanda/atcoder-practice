#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N;
    cin>>N;
    vector<int> contestants(N);
    rep(i,0,N) cin>>contestants[i];

    vector<int> colors(9);
    rep(i,0,N) {
        int rank = floor(contestants[i]/400);
        if (rank >= 8) rank=8;
        colors[rank]++;
    }
    int ansMin=0;
    rep(i,0,8) if (colors[i]!=0) ansMin++;
    // int ansMax = min(8, ansMin+colors[8]); // There's NO option of color for folks with over 3200 rate.
    int ansMax = ansMin+colors[8];
    if (ansMin==0) ansMin++;
    cout << ansMin << " " << ansMax << endl;
    return 0;
}
