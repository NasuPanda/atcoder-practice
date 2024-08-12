#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long A, B, C, K;
    cin >> A >> B >> C >> K;
    if (K%2==0) cout << A-B << endl;
    else cout << B-A << endl;
    return 0;
}
