#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int X;

// https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_c
// 個数Cが決まれば、合計額が取りうる範囲は100*C ~ 105*Cになる。

int main() {
    cin >> X;

    for (int c=1; c<=10000; c++) {
        if (c*100 <= X && X <= c*105) {
            cout << 1;
            return 0;
        }
    }

    cout << 0;
	return 0;
}
