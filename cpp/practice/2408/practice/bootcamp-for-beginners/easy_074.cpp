#include <bits/stdc++.h>
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// int main() {
//     int A, B, C, X, Y;
//     cin >> A >> B >> C >> X >> Y;
//     long long ans=0;
//     if (A + B > 2 * C) {
//         int numberOfABPizza = min(X, Y);
//         rep(i, numberOfABPizza) {
//             ans += 2 * C;
//             X--;
//             Y--;
//             // cout << "AB" << endl;
//         }
//     }
//     while(X>0) {
//         ans += min(A, 2*C);
//         X--;
//         // cout << "A" << endl;
//     }
//     while(Y>0) {
//         ans += min(B, 2*C);
//         Y--;
//         // cout << "B" << endl;
//     }
//     cout << ans << endl;
//     return 0;
// }

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    int ABMax = max(X, Y) * 2;
    long long ans = infl;
    for (int ab=0; ab<=ABMax; ab+=2) {
        ll sum = C * ab;
        ll x = X - ab / 2;
        ll y = Y - ab / 2;
        if (0 < x) sum += A * x;
        if (0 < y) sum += B * y;
        ans = min(ans, sum);
    }
    cout << ans << endl;
}
