#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc280/tasks/abc280_a
// 簡単

int main() {
    int H, W, ans=0;
    cin >> H >> W;
    
    rep(i, H) {
        // 文字列を受け取る
        string line;
        cin >> line;
        
        // 文字列の探索
        rep(j, W) {
            if (line.at(j) == '#') ans++;
        }
    }
    
    cout << ans;
}

