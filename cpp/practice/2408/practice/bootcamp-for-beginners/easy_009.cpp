#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,K; cin >> N >> K;
    int min_dis=0,x;
    rep(i,N) {
        cin >> x;
        // A is nearer to the ball than B
        if (x < abs(K-x)) {
            min_dis+=2*x;
        } else {
            min_dis+=2*abs(K-x);
        }
    }
    cout << min_dis << endl;
    return 0;
}
