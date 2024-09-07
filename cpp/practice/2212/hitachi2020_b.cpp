#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/hitachi2020/tasks/hitachi2020_b
// ほどよい難易度
// A, B, M が 10**5 までなので、全探索では厳しい
// {A,Bの最安値同士の組み合わせ, クーポンを使った場合の値段}から最小値を求めればいい

int main() {
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B), x(M), y(M), c(M);
    rep(i, A) cin >> a.at(i);
    rep(i, B) cin >> b.at(i);
    rep(m, M) {
        cin >> x.at(m);
        cin >> y.at(m);
        cin >> c.at(m);
    }

    vector<int> candidate;

    // A, B の最安値
    int aMin = *min_element(a.begin(), a.end());
    int bMin = *min_element(b.begin(), b.end());
    candidate.push_back(aMin+bMin);

    // クーポンを使った場合
    // i番目の冷蔵庫 なので a, b の -1 したインデックスにアクセスする
    rep(i, M) candidate.push_back(a.at(x.at(i) - 1) + b.at(y.at(i) - 1) - c.at(i));

    cout << *min_element(candidate.begin(), candidate.end());

    return 0;
}
