#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool includes_three(int x) {
    while (x) {
        if (x % 10 == 3) {
            return true;
        }
        x /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    // Loop from 3 to n
    for (int i=3; i<=n; i++) {
        if (i % 3 == 0) {
            cout << " " << i;
        } else if (includes_three(i)) {
            cout << " " << i;
        }
    }

    cout << endl;
    return 0;
}
