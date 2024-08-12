#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isPalindromic(string s) {
    int N = s.size();
    for (int i=0; i<N/2; i++) {
        if (s[i] != s[N-1-i]) return false;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;
    int ans=0;
    for (int i=A; i<=B; ++i) {
        if (isPalindromic(to_string(i))) ans++;
    }
    cout << ans << endl;
    return 0;
}
