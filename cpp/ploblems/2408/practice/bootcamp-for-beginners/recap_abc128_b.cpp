#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<pair<pair<string, int>, int>> restaurants;
    for (int i=1; i<=N; ++i) {
        string S;
        int P;
        cin >> S >> P;
        restaurants.push_back(make_pair(
            make_pair(S, -P), i
        ));
    }
    sort(restaurants.begin(), restaurants.end());
    for (auto r : restaurants) cout << r.second << endl;
}
