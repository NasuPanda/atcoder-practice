#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 単純にAC,WAのペアを格納するアプローチだと、WA→AC→WAという順序の場合に対応出来ない
// そこで、各問題についてAC,WAを格納する配列を作り、順番どおりに格納することで対応する。

int main() {
    int N, M; cin >> N >> M;
    vector<vector<string>> P(1000009, vector<string>());

    int p;
    string s;
    rep(i, M) {
        cin >> p >> s;
        P[p].push_back(s);
    }

    int acTotal = 0;
    int waTotal = 0;
    rep(i, 1000009) {
        int ac=0, wa=0;
        for (string s : P[i]) {
            if (s == "WA") wa++;
            if (s == "AC") {
                acTotal++;
                waTotal += wa;
                break;
            }
        }
    }

    cout << acTotal << ' ' << waTotal;
	return 0;
}
