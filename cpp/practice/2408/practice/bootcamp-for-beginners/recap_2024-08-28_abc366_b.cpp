#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    vector<string> S(N);
    int M=0;
    rep(i,0,N) {cin >> S[i]; chmax(M, (int)S[i].size());}
    for (auto &s : S) {
        int diff=M-s.size();
        rep(j,0,diff) s.push_back('*');
    }
    vector<string> ans(M);
    for (int i=N-1; i>=0; --i) {
        string s = S[i];
        rep(j, 0, M) ans[j].push_back(s[j]);
    }
    for (auto &s : ans) {
        for (int i=N-1; i>=0; --i) {
            if (s[i] == '*') s.pop_back();
            else break;
        }
        cout << s << endl;
    }
}
