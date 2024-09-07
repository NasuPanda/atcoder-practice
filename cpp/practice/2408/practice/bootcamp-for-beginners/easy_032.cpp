#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    string S; cin >> S;
    int x=0;
    int ans=0;
    for (auto c : S) {
        if (c == 'I') x++;
        else x--;

        ans = max(x, ans);
    }
    cout << ans << endl;
    return 0;
}
