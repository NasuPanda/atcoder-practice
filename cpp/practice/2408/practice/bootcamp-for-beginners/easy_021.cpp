#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_prime(int x) {
    if (x==1) {return false;}
    if (x==2) {return true;}
    for (int i=2; i<=sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int X; cin>>X;
    while(true) {
        if(is_prime(X)) {
            break;
        }
        X++;
    }
    cout << X << endl;
    return 0;
}
