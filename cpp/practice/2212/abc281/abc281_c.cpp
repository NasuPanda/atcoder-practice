#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc281/tasks/abc281_c
// 解けたが時間かかった

pair<int, long long> calcNumberAndElapsedTime(long long T, vector<long long> A) {
    pair<int, long long> res;
    rep(i, A.size()) {
        int currentSongLength = A.at(i);
        // cout << "T is " << T << " Current is " << currentSongLength << endl;
        if (currentSongLength > T) {
            // 曲の番号なので +1 する
            res = make_pair(i + 1, T);
            break;
        }
        T -= currentSongLength;
    }
    return res;
}

int main() {
    int N;
    long long T;
    cin >> N >> T;
    vector<long long> A(N);
    rep(i, N) cin >> A.at(i);

    // 1周の合計再生時間
    long long onePlayTotal=0;
    rep(i, N) onePlayTotal += A.at(i);

    // 1周の合計よりもTが小さい場合
    if(T <= onePlayTotal) {
        pair<int, long long> res = calcNumberAndElapsedTime(T, A);
        cout << res.first << ' ' << res.second;
        return 0;
    }

    long long TRemain = T % onePlayTotal;
    pair<int, long long> res = calcNumberAndElapsedTime(TRemain, A);
    cout << res.first << ' ' << res.second;

    return 0;
}
