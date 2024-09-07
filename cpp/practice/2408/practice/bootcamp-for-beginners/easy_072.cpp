#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int X;
    cin >> X;
    int ans = 0;
    for (int b=1; b<=100; ++b) {
        for (int p=2; p<=100; ++p) {
            int a = pow(b, p);
            if (a <= X) ans = max(ans, a);
        }
    }

    // 別解
    // int ans = 1;
    // for (int b=2; b<=X; ++b) {
    //     int x = b * b;
    //     while(x <= X) {
    //         ans = max(ans, x);
    //         x *= b;
    //     }
    // }

    cout << ans << endl;
    return 0;
}
