#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int H, W;
    while (true) {
        cin >> H >> W;
        if (H==0 && W==0) {break;}

        rep(i, H) {
            rep(j, W) {
                if ((j==0) | (j==W-1) | (i==0) | (i==H-1)) { cout << "#"; }
                else { cout << "."; }
            }
        cout << endl;
        }
        cout << endl;
    }
    return 0;
}
