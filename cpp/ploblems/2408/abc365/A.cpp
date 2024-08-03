#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int Y; cin >> Y;
    if(Y%400==0) {cout << 366 << endl;}
    else if (Y%100==0) {cout << 365 << endl;}
    else if (Y%4==0) {cout << 366 << endl;}
    else {cout << 365 << endl;}
    return 0;
}
