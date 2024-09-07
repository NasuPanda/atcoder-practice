#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (auto& p : P) cin >> p;
    int ans=1; // The first element will be always counted
    int minSoFar=P[0];
    for (int i=1; i<N; i++) {
        int num=P[i];
        if (num <= minSoFar) {
            ans++;
            minSoFar = num;
        }
    }
    cout << ans << endl;
    return 0;
}
