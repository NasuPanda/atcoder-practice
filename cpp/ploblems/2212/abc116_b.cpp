#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc116/tasks/abc116_b
// 値小さいから全探索で良さそう→OKだった
// 簡単

int f(int n) {
    // 奇数
    if(n & 1) {
        return 3*n + 1;
    } else {
        return n/2;
    }
}


int main() {
    int s;
    cin >> s;
    vector<int> a = {s};
    int currentIndex=0;

    while(true) {
        int beforeValue = a.at(currentIndex);
        currentIndex++;

        int newValue = f(beforeValue);

        // 存在判定
        bool exists = find(begin(a), end(a), newValue) != end(a);
        if (exists) {
            cout << currentIndex+1;
            return 0;
        } else {
            a.push_back(newValue);
        }
    }
}
