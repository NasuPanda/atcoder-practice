#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc280/tasks/abc280_b
// まぁまぁ詰まった

int main() {
    // 数列S, Aの長さN
    int N;
    cin >> N;
    // 数列Sを用意
    vector<int> S(N);
    rep(i, N) cin >> S.at(i);
    
    int beforeValue = 0;
    rep(i, N) {
        int currentValue = S.at(i);
        cout << currentValue - beforeValue << ' ';
        beforeValue = currentValue;
    }
}

