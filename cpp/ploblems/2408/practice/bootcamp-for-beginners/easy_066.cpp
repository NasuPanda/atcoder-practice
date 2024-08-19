#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    vector<int> count(4);
    for (auto s : S) {
        if (s=='N') count[0]++;
        if (s=='W') count[1]++;
        if (s=='S') count[2]++;
        if (s=='E') count[3]++;
    }
    string ans = "No";
    if (
        (count[0]!=0 && count[1]==0 && count[2]!=0 && count[3]==0)||
        (count[0]==0 && count[1]!=0 && count[2]==0 && count[3]!=0)||
        (count[0]!=0 && count[1]!=0 && count[2]!=0 && count[3]!=0)
        ) {
            ans = "Yes";
        }

    cout << ans << endl;
    return 0;
}
