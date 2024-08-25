#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N;
    cin >> N;
    vector<pair<pair<string, int>, int>> scores(N);
    rep(i, 0, N) {
        string s;
        int p;
        cin >> s >> p;
        scores[i] = make_pair(make_pair(s, -p), i+1);
    }
    sort(all(scores));
    rep(i, 0, N) cout << scores[i].second << endl;
    return 0;
}
