#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define fore(i,a) for(auto &i:a)

int N;
string S[109];
int P[109];

int main() {
    cin >> N;
    rep(i, N) cin >> S[i] >> P[i];

    vector<pair<pair<string, int>, int>> R(N);
    rep(i, N) R.at(i) = make_pair(
        make_pair(S[i], -P[i]), i
    ); // Pは降順なので、×-1しておく

    sort(R.begin(), R.end());
    rep(i, N) cout << R[i].second + 1 << endl;
}
