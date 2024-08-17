#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long A, B;
    int K;
    cin >> A >> B >> K;
    if (B - A + 1 < K) {
        for (long long i=A; i<=B; ++i) cout << i << endl;
        return 0;
    }
    set<long long> ans;
    for (long long i=A; i<A+K; ++i) {
        ans.insert(i);
    }
    for (long long i=B-K+1; i<=B; ++i) {
        ans.insert(i);
    }
    for (auto a : ans) cout << a << endl;
    return 0;
}
