#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int N = S.size()+1;
    vector<int> L(N);
    vector<int> R(N);

    int cnt=0;
    for (int i=1; i<N; ++i) {
        if (S[i-1]=='<') cnt++;
        else cnt=0;
        L[i] = cnt;
        // cout << i << " " << S[i-1] << " ";
    }

    cnt=0;

    for (int i=N-2; i>=0; --i) {
        if (S[i]=='>') cnt++;
        else cnt=0;
        R[i] = cnt;
        // cout << i << " " << S[i] << " ";
    }

    // for (auto l : L) cout << l << " ";
    // cout << endl;
    // for (auto r : R) cout << r << " ";
    // cout << endl;

    long long ans=0;
    for (int i=0; i<N; ++i) {
        ans += max(L[i], R[i]);
    }
    cout << ans << endl;
    return 0;
}
