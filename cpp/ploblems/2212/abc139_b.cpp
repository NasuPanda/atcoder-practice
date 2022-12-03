#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc139/tasks/abc139_b
// そこそこ苦戦した

// A 個口の電源タップを何個使うと B口以上に拡張出来るか。

int main() {
    int a, b;
    cin >> a >> b;
    // NOTE: 口数は a ずつではなく, a-1 ずつ増える。
    // これがダメな理由がわからん: int ans = ceil((b-1) / (a-1));

    int ans = 0;
    int total = 1;

    while (total < b) {
        total += (a - 1);
        ans++;
    }

    cout << ans;
}
