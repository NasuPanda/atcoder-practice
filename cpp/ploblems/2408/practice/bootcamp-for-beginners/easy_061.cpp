#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string rotate(string S) {
    int N = S.size();
    string rotatedS=S;
    rotatedS[0] = S[N-1];
    for (int i=1; i<N; ++i) {
        rotatedS[i] = S[i-1];
    }
    return rotatedS;
}

int main() {
    string S, T;
    cin >> S >> T;
    string ans = "No";
    if (S == T) {
        ans = "Yes";
    }
    int numberOfAttempt = S.size() - 1;
    rep (i, numberOfAttempt) {
        // cout << S << endl;
        S = rotate(S);
        if (S == T) ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}
