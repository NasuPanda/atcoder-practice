#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int x, y;

    while (true) {
        cin >> x >> y;
        if ((x == 0) && (y == 0)) { break; }
        if (x > y) { cout << y << " " << x << "\n"; }
        else { cout << x << " " << y << "\n"; }
    }

    return 0;
}
