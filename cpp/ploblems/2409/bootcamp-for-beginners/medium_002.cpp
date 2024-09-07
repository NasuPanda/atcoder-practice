#include <bits/stdc++.h>
using namespace std;
/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// [editorial.pdf](https://img.atcoder.jp/agc029/editorial.pdf)
// [AtCoder AGC 029 A - Irreversible operation (茶色, 300 点) - けんちょんの競プロ精進記録](https://drken1215.hatenablog.com/entry/2018/12/16/020100)

int main() {
    string S;
    cin >> S;
    long long n = S.size();
    long long res = 0;
    long long num = 0;
    for (long long i = 0; i < n; ++i) {
        if (S[i] == 'W') {
            res += num;
        }
        else {
            ++num;
        }
    }
    cout << res << endl;
    return 0;
}
