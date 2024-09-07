#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A, B; cin >> A >> B;
    string S; cin >> S;
    if (S[A] != '-') {
        cout << "No" << endl;
        return 0;
    }
    // 適当な数字と置換
    S[A] = '1';
    for (auto c : S) {
        if (c == '-') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
