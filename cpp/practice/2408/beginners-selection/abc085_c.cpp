#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,Y; cin >> N >> Y;

    for (int x=0; x<=N; x++) {
        for (int y=0; y<=N-x; y++) {
            if ((Y - 10000*x - 5000*y - (N-x-y)*1000) == 0) {
                cout << x << " " << y << " " << (Y - 10000*x - 5000*y) / 1000 << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
