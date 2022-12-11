#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc134/tasks/abc134_c
// ロジックは簡単 もう少しきれいに書けそう

int findIndex(vector<int> vec, int value) {
    rep(i, vec.size()) {
        if (vec.at(i) == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N; cin >> N;
    vector<int> A(N); rep(i,N) cin >> A.at(i);

    int maxValue = *max_element(A.begin(), A.end());
    int maxCount = count(A.begin(), A.end(), maxValue);

    // maxがユニークでないならmaxを出力し続ける
    if (maxCount > 1) {
        rep(i,N) cout << maxValue << endl;
    }
    // maxがユニークならmaxのときは2番目にmaxな値を出力、それ以外はmaxを出力
    else {
        int maxIndex = findIndex(A, maxValue);

        // 2番目にmaxな値を探す。ソートして2番目を取りだすでもOK
        A.erase(cbegin(A) + maxIndex);
        int secondMaxValue = *max_element(A.begin(),A.end());

        rep(i,N) {
            if (i != maxIndex) cout << maxValue;
            else cout << secondMaxValue;

            cout << endl;
        }
    }

    return 0;
}
