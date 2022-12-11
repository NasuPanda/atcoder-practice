#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/agc002/tasks/agc002_a
// 場合分けをしっかりやるだけ。else忘れでACしなかった。疲れた。。。

int main() {
    long long a,b; cin >> a >> b;

    if (a <= 0 && 0 <= b) cout << "Zero" << endl;
    else if (a > 0) cout << "Positive" << endl;
    else {
        int num = b - a + 1;
        if (num & 1) cout << "Negative" << endl;
        else cout << "Positive" << endl;
    }

    return 0;
}
