#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;

    if (a < b) {
        cout << "a < b\n";
    } else if (a > b) {
        cout << "a > b\n";
    } else {
        cout << "a == b\n";
    }
    return 0;
}