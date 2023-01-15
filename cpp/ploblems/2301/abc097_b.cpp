#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// √1000 は 31.62

int solve(int X) {
    if (X == 1) return X;

    vector<int> results;

    for (int i=2; i<32; i++) {
        for (int p=2; p<11; p++) {
            if (X >= pow(i, p)) results.push_back(pow(i, p));
        }
    }

    // rep(i, results.size()) cout << results.at(i) << endl;

    return *max_element(results.begin(), results.end());
}

int main() {
    int X; cin >> X;

    cout << solve(X) << endl;

	return 0;
}
