#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc139/tasks/abc139_c
// かんたん

int main() {
    int N; cin >> N;

    int countMax=0,count=0,beforeH,currentH;
    cin >> beforeH;
    rep(i,N-1) {
        cin >> currentH;

        if (beforeH >= currentH) {
            count++;
            if (countMax < count) countMax = count;
        }
        else count=0;
        beforeH = currentH;
    }
    cout << countMax;
    return 0;
}
