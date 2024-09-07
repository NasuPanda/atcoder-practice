#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long A,B,K; cin >> A >> B >> K;

    // A~B の間が 2K より小さい場合はすべて出力
    if ((B-A) / 2 < K) {
        for (int i=A; i<=B; i++) cout << i << endl;
        return 0;
    }

    for(long long i=A; i<A+K; i++) cout << i << endl;
    for(long long i=B-K + 1; i<=B; i++) cout << i << endl;
    return 0;
}
