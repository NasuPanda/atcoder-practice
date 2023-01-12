#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 解説 : https://drken1215.hatenablog.com/entry/2019/12/22/224100_1

int N;
vector<int> a(200009);

int main() {
    cin >> N;
    rep(i, N) cin >> a[i];

    int iter = 1;
    rep(i, N) {
        if (a[i] == iter) iter++;
    }

    if (iter == 1) cout << -1;
    else cout << N - (iter - 1);

	return 0;
}
