#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    // left
    if (x - r < 0) { cout << "No\n"; }
    // right
    else if (x + r > W) { cout << "No\n"; }
    // upper
    else if (y + r > H) { cout << "No\n"; }
    // bottom
    else if (y - r < 0) { cout << "No\n"; }
    // None of the above
    else { cout << "Yes\n"; }

    return 0;
}
