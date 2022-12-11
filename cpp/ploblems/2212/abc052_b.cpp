#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc052/tasks/abc052_b
// 簡単すぎ

int main() {
    int N;
    string S;
    cin >> N >> S;

    int x = 0, maxX = 0;

    for(char Si : S) {
        if (Si == 'I') x++;
        else x--;

        if(x > maxX) maxX = x;
    }
    cout << maxX;

    return 0;
}
