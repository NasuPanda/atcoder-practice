#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N, 100000), B(N-1);
    for (auto &b : B) cin >> b;
    for (int i=0; i<N-1; ++i) {
        int b = B[i];
        if (b < A[i]) A[i] = b;
        if (b < A[i+1]) A[i+1] = b;
    }
    int ans = 0;
    for (auto a : A) {ans += a;}
    cout << ans << endl;
    return 0;
}
