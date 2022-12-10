#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc150/tasks/abc150_c
// 順列をすべて列挙する方法さえわかってしまえば簡単

int main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    rep(i, N) cin >> P.at(i);
    rep(i, N) cin >> Q.at(i);

    // 1~Nのシーケンス生成
    vector<int> nums(N);
    iota(nums.begin(), nums.end(), 1);

    int a, b, count = 1;

    do {
        if(P == nums) a = count;
        if(Q == nums) b = count;
        count++;
    } while (next_permutation(nums.begin(), nums.end()));

    cout << abs(a-b);

    return 0;
}
