#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc059/tasks/abc059_b
// 文字列として扱えばいいのか！なるほどね。

int main() {
    string A, B; cin >> A >> B;

    if (A.size() != B.size()) {
        if (A.size() > B.size()) cout << "GREATER";
        else cout << "LESS";
    }
    else {
        rep(i,A.size()) {
            int intA = int(A.at(i) - '0');
            int intB = int(B.at(i) - '0');
            if (intA > intB) {
                cout << "GREATER";
                return 0;
            }
            else if (intA < intB) {
                cout << "LESS";
                return 0;
            }
        }
        cout << "EQUAL";
    }

    return 0;
}
