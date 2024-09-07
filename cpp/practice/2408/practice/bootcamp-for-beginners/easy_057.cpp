#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A, B;
    cin >> A >> B;
    int ans = -1;
    for (int i=1; i<=1250; ++i) {
        int taxA = floor(i * 0.08);
        int taxB = floor(i * 0.1);
        if (taxA==A && taxB==B) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
