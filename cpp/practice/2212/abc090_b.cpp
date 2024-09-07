#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc090/tasks/abc090_b
// 簡単

// 回文判定(5桁確定)
bool isPalindromic(int n) {
    string s = to_string(n);
    if (s.at(0)==s.at(4) && s.at(1)==s.at(3)) return true;
    return false;
}

int main() {
    int A,B; cin >> A >> B;
    int ans=0;
    for (int i=A; i<=B; i++) if(isPalindromic(i)) ans++;
    cout << ans;
    return 0;
}
