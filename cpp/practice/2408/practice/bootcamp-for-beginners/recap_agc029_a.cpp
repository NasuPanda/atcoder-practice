#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    long long ans=0, countB=0;
    for (auto s : S) {
        if (s=='B') countB++;
        else ans += countB;
    }
    cout << ans << endl;
    return 0;
}
