#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 対象の値が存在する場合そのインデックスを、存在しなければ-1を返す
int findIndex(vector<int> vec, int value) {
    rep(i, vec.size()) {
        if (vec.at(i) == value) {
            return i;
        }
    }
    
    return -1;
}

// 3 * 3 のビンゴが存在 (A * 3 * 3)
// N 個の B にチェックを付ける
// ビンゴが成立しているか判定

int main() {
    // ビンゴカードを用意
    vector<int> bingoNumbers(3*3);
    vector<bool> bingoCurd(3*3);
    rep(i, 3*3) {
        cin >> bingoNumbers.at(i);
        bingoCurd.at(i) = false;
    }
    
    // N回チャンスがある
    int N, B;
    cin >> N;
    rep(i, N) {
        // Bを受け取ってビンゴ判定
        cin >> B;
        int bingoNumberIndex = findIndex(bingoNumbers, B);
        if (!(bingoNumberIndex == -1)) bingoCurd.at(bingoNumberIndex) = true;
    }
    
    // ビンゴ判定
    // 汚いがとりあえずコレで
    if (bingoCurd.at(0) && bingoCurd.at(1) && bingoCurd.at(2)) {
        cout << "Yes";
    } else if (bingoCurd.at(3) && bingoCurd.at(4) && bingoCurd.at(5)) {
        cout << "Yes";
    } else if (bingoCurd.at(6) && bingoCurd.at(7) && bingoCurd.at(8)) {
        cout << "Yes";
    } else if (bingoCurd.at(0) && bingoCurd.at(3) && bingoCurd.at(6)) {
        cout << "Yes";
    } else if (bingoCurd.at(1) && bingoCurd.at(4) && bingoCurd.at(7)) {
        cout << "Yes";
    } else if (bingoCurd.at(2) && bingoCurd.at(5) && bingoCurd.at(8)) {
        cout << "Yes";
    } else if (bingoCurd.at(0) && bingoCurd.at(4) && bingoCurd.at(8)) {
        cout << "Yes";
    } else if (bingoCurd.at(2) && bingoCurd.at(4) && bingoCurd.at(6)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

