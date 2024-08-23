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
    vector<string> S(N);
    rep(i, 0, N) cin >> S[i];
    int M=0;
    rep(i, 0, N) chmax(M, (int)S[i].size());
    rep(i, 0, N) {
        rep(j, 0, M - S[i].size()) S[i].push_back('*');
    }
    vector<string> T(M);
    for(int i=N-1; i>=0; --i) {
        string s = S[i];
        rep(j, 0, M) {
            T[j].push_back(s[j]);
        }
    }
    rep(i, 0, M) {
        for(int j=N-1; j>=0; --j) {
            if (T[i][j] == '*') T[i].pop_back();
            else break;
        }
        cout << T[i] << endl;
    }
    return 0;
}
