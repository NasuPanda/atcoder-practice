// template * * * * * * * * * * * * * * * * * * * * * * * * * *
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// URL
// 感想

int main() {
    return 0;
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

// 整数 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* 素数判定: √N 以下の値で割り切れなければ √N以上の値で割り切れることは無い性質を利用する */
bool is_prime(long long N) {
    if (N == 1) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

/* 約数全列挙: 約数は[小さい値・大きい値の組合せ][√N**2]しか存在しない性質から, √Nを境界値として利用する */
vector<long long> enum_divisors(long long N) {
    vector<long long> res;

    for (long long i = 1; i*i <= N; i++) {
        if (N % i == 0) {
        res.push_back(i);
        // 重複が無ければiの相方も追加する
        if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

// 偶奇判定 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
{
    int N = 10;
    // & 単体: ビット演算(AND)
    // N &1 : 0b000...1 AND N ということ。Nの最下位ビットが1/0(奇/偶)によって結果が変わる。
    if(N & 1) cout << "奇数の場合の処理";
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

// 最大最小 min/max * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/* int 型の配列から最小の値を返す */
int return_min(vector<int> vec) {
    // 適当な大きい値
    int minx = 2147483647;

    for (int i=0; i<vec.size(); i++) {
        minx = min(minx, vec.at(i));
    }
    return minx;
}

/* 最小値/最大値のみ取得 */
// min_element は範囲の中で最小の要素の位置を指すイテレータを返す。
// イテレータに * をつけるとその位置の値にアクセス出来る。
int minNumber = *min_element(numbers.begin(), numbers.end());

/* 最小値と最大値を取得する */
sort(vec.begin(), vec.end());
int minVec = vec[0], maxVec = vec[N-1];

/* 最小値のインデックスを取得する */
int getMinValueIndex(vector<int> x) {
    vector<int>::iterator iter = min_element(x.begin(), x.end());
    return distance(x.begin(), iter);
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

// 存在判定 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/*対象の値が存在する場合そのインデックスを、存在しなければ-1を返す*/
int findIndex(vector<int> vec, int value) {
    rep(i, vec.size()) {
        if (vec.at(i) == value) {
            return i;
        }
    }
    return -1;
}

/* 配列に要素が存在するか判定 */
{
    bool exists = find(begin(arr), end(arr), target) != end(arr);
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

/* シーケンス生成 */
vector<int> nums(5); // 先にスペースを確保しておく必要がある
iota(nums.begin(), nums.end(), 0); // 0~4 のシーケンスを生成
