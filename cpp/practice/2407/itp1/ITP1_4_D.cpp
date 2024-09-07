#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long n, a, min=1000000, max=-1000000, sum=0;
    cin >> n;
    rep(i, n) {
        cin >> a;
        if (min > a) { min = a; }
        if (max < a) { max = a; }
        sum += a;
    }
    cout << min << " " << max << " " << sum << endl;

    return 0;
}
