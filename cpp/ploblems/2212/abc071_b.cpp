#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc071/tasks/abc071_b
// 丁寧な条件分け。

int main() {
    string S;
    cin >> S;
    vector<int> codes(26);
    iota(codes.begin(), codes.end(), 97); // 97~122

    // S の構成要素を数値に変換→重複排除
    vector<int> nums;
    for (char s : S) nums.push_back(int(s));
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    // すべての小文字が現れる場合
    if (nums.size() == 26) {
        cout << "None";
        return 0;
    }

    for (int code : codes) {
        bool exists = find(begin(nums), end(nums), code) != end(nums);
        if (!(exists)) {
            cout << char(code);
            return 0;
        }
    }

    return 0;
}
