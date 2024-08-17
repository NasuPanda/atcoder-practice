#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isLowercase(char c) {
    return ('a' <= c && c <= 'z');
}

int main() {
    string S;
    cin >> S;
    string ans="AC";

    if (S.at(0) != 'A') ans = "WA";
    int countC=0;
    for (int i=2; i<=S.size()-2; ++i) {
        if (S.at(i) == 'C') {
            countC++;
            S.at(i) = 'c';
        }
    }
    if (countC != 1) ans = "WA";
    for (int i=1; i<S.size(); ++i) {
        if (!(isLowercase(S[i]))) ans = "WA";
    }
    cout << ans << endl;
    return 0;
}
