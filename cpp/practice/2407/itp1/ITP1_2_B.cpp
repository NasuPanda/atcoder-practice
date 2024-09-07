#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a < b) && (b < c)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
