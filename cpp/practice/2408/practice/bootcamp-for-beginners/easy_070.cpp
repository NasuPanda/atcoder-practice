#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int X;

bool solve(int X) {
    for (int c=1; c<=10000; ++c) {
        if (100*c <= X && X <= 105*c) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> X;
    cout << solve(X) << endl;
    // int minimumNumOfCoins = 0;
    // int lessThanHundred = X % 100;
    // int hundredOrMore = X - lessThanHundred;
    // while (lessThanHundred >= 10) {
    //     lessThanHundred -=10;
    //     minimumNumOfCoins += 2;
    // }
    // while (lessThanHundred > 5) {
    //     lessThanHundred -= 5;
    //     minimumNumOfCoins++;
    // }
    // if (lessThanHundred > 0) minimumNumOfCoins++;
    // if (minimumNumOfCoins*100 <= hundredOrMore) cout << 1 << endl;
    // else cout << 0 << endl;
    // return 0;
}
