#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> roads(N, 0);
    int a, b;
    rep(i, M) {
        cin >> a >> b;
        roads[a-1]++;
        roads[b-1]++;
    }
    for (auto r : roads) cout << r << endl;
    return 0;
}
