#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    int result;
    float TAX_RATE=1.08;
    for(int x=1; x<=N; x++) {
        result=x*TAX_RATE;
        if (result == N) {
            cout << x << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}
