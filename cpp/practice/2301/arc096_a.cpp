#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// A+B と C*2 を比較。
// C*2の方が安い場合、min(X,Y)までC円で購入。
// A, Bのどちらかが足りていなければ、A/B/C*2の内最も安い価格で買う。

int main() {
    int A,B,C,X,Y; cin >> A >> B >> C >> X >> Y;

    // 合計額
    int price = 0;

    if (A+B < C*2) price += A*X + B*Y;
    else {
        if (X == Y) price += C*2*X;
        // Aの方が多い
        else if (X > Y) {
            price += C*2*Y;
            if (A > C*2) price += C*2*(X-Y);
            else price += A*(X-Y);
        }
        // Bの方が多い
        else if (X < Y) {
            price += C*2*X;
            if (B > C*2) price += C*2*(Y-X);
            else price += B*(Y-X);
        }
    }

    cout << price;

	return 0;
}
