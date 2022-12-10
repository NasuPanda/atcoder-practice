#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc281/tasks/abc281_b
// 簡単だったけど条件もう少しきれいに書けそう

int main() {
    string S;
    cin >> S;

    if (!(S.size() == 8)) {
        cout << "No";
        return 0;
    }
    if (!(isalpha(S.at(0)) && isalpha(S.at(S.size() - 1)))) {
        cout << "No";
        return 0;
    }

    string num = S.substr(1, 6);
    if (num.at(0) == '0') {
        cout << "No";
        return 0;
    }
    for(auto elem : num) {
        if(isalpha(elem)) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}
