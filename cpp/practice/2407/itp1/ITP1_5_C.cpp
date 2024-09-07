#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_even(int x) {
    return (x % 2 == 0);
}

int main() {
    int H, W;

    while (true) {
        cin >> H >> W;
        if (H==0 && W==0) {break;}

        rep(i, H) {
            rep(j, W) {
                if (is_even(i)) {
                    if (is_even(j)) {
                        cout << "#";
                    } else {
                        cout << ".";
                    }
                }
                else {
                    if (is_even(j)) {
                        cout << ".";
                    } else {
                        cout << "#";
                    }
                }
            }
        cout << endl;
        }
        cout << endl;
    }
    return 0;
}
