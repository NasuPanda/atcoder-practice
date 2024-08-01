#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int x, y;
    cin >> x >> y;

    double f = double(x) / double(y);

    cout << x/y << " " << x%y << " ";
    cout << fixed << setprecision(5) << f << endl;
    return 0;
}
