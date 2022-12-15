#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool enableShiritori(string before, string next) {
    char tail = *rbegin(before);
    char head = next.at(0);
    return tail == head;
}

int main() {
    int N; cin >> N;
    vector<string> all(N);
    rep(i, N) cin >> all.at(i);

    string before=all.at(0), current;
    for (int i=1; i<N; i++) {
        current = all.at(i);

        // 重複する単語の有無を確認(beforeを使う)
        if (count(all.begin(), all.end(), before) != 1) {
            cout << "No";
            return 0;
        }
        // 有効なしりとりか
        if (!(enableShiritori(before, current))) {
            cout << "No";
            return 0;
        }

        before = current;
    }
    cout << "Yes";
    return 0;
}
