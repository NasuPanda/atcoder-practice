#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> T(N);
    long long total=0;
    for (auto &t : T) {
        cin >> t;
        total += t;
    };

    int M;
    cin >> M;
    vector<int> P(M), X(M);
    rep(i, M) cin >> P[i] >> X[i];

    rep(i, M) {
        long long totalWithDrink = total;
        int drinkNumber = P[i] - 1;
        totalWithDrink -= T[drinkNumber];
        totalWithDrink += X[i];
        cout << totalWithDrink << endl;
    }
    return 0;
}
