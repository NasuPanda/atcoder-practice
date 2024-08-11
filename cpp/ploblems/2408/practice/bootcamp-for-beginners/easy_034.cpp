#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A, B, C; cin >> A >> B >> C;
    int X; cin >> X;
    int ans=0;
    for (int a=0; a <= A; ++a) {
        for (int b=0; b <= B; ++b) {
            if ((X - 500*a - 100*b) >= 0 && (X - 500*a - 100*b) <= 50*C) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
