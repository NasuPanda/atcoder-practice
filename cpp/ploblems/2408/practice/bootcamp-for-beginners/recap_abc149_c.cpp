#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_prime(int x) {
    if (x==1) return false;
    if (x==2) return true;
    for (int i=2; i<=sqrt(x); ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int X;
    cin >> X;
    while (!is_prime(X)) {
        X++;
    }
    cout << X;
    return 0;
}
