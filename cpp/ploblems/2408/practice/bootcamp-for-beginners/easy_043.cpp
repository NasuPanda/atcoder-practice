#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> count(26);
    string w;
    cin >> w;
    for (auto c : w) count[c - 'a']++;
    string ans="Yes";
    for (auto c : count) if (c % 2 == 1) ans="No";
    cout << ans << endl;
    return 0;
}
