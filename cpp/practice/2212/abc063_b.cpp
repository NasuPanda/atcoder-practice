#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc063/tasks/abc063_b
// 簡単

int main() {
    string S;
    cin >> S;

    int sizeBeforeUnique = S.size(), sizeAfterUnique;

    // 重複削除
    sort(S.begin(), S.end());
    S.erase(unique(S.begin(), S.end()), S.end());
    sizeAfterUnique = S.size();

    if (sizeAfterUnique == sizeBeforeUnique) cout << "yes";
    else cout << "no";

    return 0;
}
