#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N, L;

string solve(vector<string> S) {
    sort(S.begin(), S.end());
    string ans="";
    rep(i, N) ans += S[i];
    return ans;
}

int main() {
    cin >> N >> L;
    vector<string> S(N);
    rep(i, N) cin >> S[i];
    cout << solve(S) << endl;
    return 0;
}
