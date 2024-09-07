#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string S;

int main() {
    cin >> S;

    if (S.at(0) != 'A') {cout << "WA"; return 0;}
    // ループで判定されない箇所が小文字か判定
    if (isupper(S.at(1))) {cout << "WA"; return 0;}
    if (isupper(S.at(S.size()-1))) {cout << "WA"; return 0;}

    int numOfC = 0;
    for (int i=2; i<=S.size()-2; i++) {
        if (S.at(i) == 'C') numOfC++;
        else {
            // 小文字かどうか
            if (isupper(S.at(i))) {cout << "WA"; return 0;}
        }
    }

    if (numOfC == 1) cout << "AC";
    else cout << "WA";
	return 0;
}
