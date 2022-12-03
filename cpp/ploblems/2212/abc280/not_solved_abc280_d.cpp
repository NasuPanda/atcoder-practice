#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc280/tasks/abc280_c
// 時間内に解けなかった！悔しい。
// 解説: https://www.youtube.com/watch?v=TpMC0rJ3Jwk

// 2以上の整数Kが与えられる
// N! がKの倍数である整数Nの内、最小の値を求めよ

// 素数判定
bool isPrime(uint64_t num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }
    // 素数である
    return true;
}

// 約数の列挙
vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

// 階乗を求める
long long calcFactorial(int N) {
    long long result = 1;
    for (int i=1; i<=N; i++) {
        result *= i;
    }
    return result;
}

int main() {
    long long K;
    cin >> K;

    // K が素数の場合はN=Kで確定する
    if (isPrime(K)) {
        cout << K;
        return 0;
    }

    // N は K の約数のいずれかであることは確定しているため
    vector<long long> divisors = enum_divisors(K);

    for (long long N : divisors) {
        long long factorial = calcFactorial(N);
        if (factorial % K == 0) {
            cout << N;
            return 0;
        }
    }
}
