#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int x, y, z, n=0;
    cin >> x >> y >> z;

    for (int i=x; i<=y; i++) {
        if (z % i == 0) {
            n++;
        }
    }
    cout << n << "\n";

    return 0;
}
