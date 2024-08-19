#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    int M=0;
    for (auto &s : S) {
        cin >> s;
        M = max(M, (int)s.size());
    }
    for (auto &s : S) {
        int sizeOfString = s.size();
        rep(i, M - sizeOfString) {
            s.push_back('*');
        }
    }
    vector<string> ans(M);
    for (int i=N-1; i>=0; --i) {
        string s = S[i];
        rep(j, s.size()) {
            ans[j].push_back(s[j]);
        }
    }
    for (auto &s : ans) {
        for (int i=N-1; i>=0; --i) {
            if (s[i] == '*') {
                s.pop_back();
            }
            else {
                // cout << "BREAK!!" << endl;
                break;
            }
        }
    }
    for (auto s : ans) cout << s << endl;
    return 0;
}
