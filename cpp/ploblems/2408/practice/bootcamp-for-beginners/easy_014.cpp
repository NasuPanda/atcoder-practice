#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    // https://img.atcoder.jp/abc161/editorial.pdf
    long long N,K; cin>>N>>K;
    cout << min(N%K, K-N%K);
    return 0;
}
