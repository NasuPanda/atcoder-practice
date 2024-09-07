#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int N = S.size()+1;
    vector<int> a(N, 0);
    for (int i=0; i<N-1; ++i) {
        if (S[i]=='<') a[i+1] = a[i]+1;
    }
    for (int i=N-2; i>=0; --i) {
        if (S[i]=='>') a[i] = max(a[i+1]+1, a[i]);
    }
    long long ans=0;
    for (auto x : a) ans+=x;
    cout << ans << endl;
    return 0;
}
