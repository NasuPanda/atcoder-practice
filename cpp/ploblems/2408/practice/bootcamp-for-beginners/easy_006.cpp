#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long H, W; cin >> H >> W;
    long long count=0;
    if(W%2==0) {
        cout << (W/2)*H << endl;
    } else {
        rep(i,H) {
            if(i%2==0) {
                count += ceil(double(W)/2);
            } else {
                count += floor(double(W)/2);
            }
        }
        cout << count << endl;
    }
    return 0;
}
