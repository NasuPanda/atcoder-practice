#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// [Quick Q: How to square numbers??? - C++ Forum](https://cplusplus.com/forum/beginner/107564/)

int main() {
    double r, area, circumference;
    cin >> r;

    area = pow(r, 2) * M_PI;
    circumference = 2 * r * M_PI;

    cout << fixed << setprecision(6) << area << " " << circumference << endl;
    return 0;
}
