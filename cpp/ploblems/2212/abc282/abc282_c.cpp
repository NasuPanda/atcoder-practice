#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)



int main() {
    int N; cin >> N;
    char S;
    // 括られているかどうか
    bool isFasten = false;
    rep(_, N) {
        cin >> S;
        if (S == '"') isFasten = !isFasten; // toggle

        if (S == ',' && !(isFasten)) cout << '.';
        else cout << S;
    }
    return 0;
}

