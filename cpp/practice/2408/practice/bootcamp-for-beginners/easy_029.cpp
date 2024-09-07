#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S; cin>>S;
    int fav_num=753, ans=1000;
    for (int i=0; i<(int)S.size()-2; ++i) {
        // (char)NUMBER - '0' = (int)NUMBER.
        int x = (S[i] - '0') * 100 + (S[i+1] - '0') * 10 + (S[i+2] - '0');
        ans = min(ans, abs(x-fav_num));
    }
    cout << ans << endl;
    return 0;
}
