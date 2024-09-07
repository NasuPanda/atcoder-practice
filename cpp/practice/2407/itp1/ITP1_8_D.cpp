#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool contains_pattern(string s, string pattern) {
    int count = 0;
    rep(i, s.size()) {
        if (s[i] == pattern[0]) {
            rep(j, pattern.size()) {
                if (s[i+j] == pattern[j]) {
                    count++;
                } else {
                    count = 0;
                    break;
                }
                if (count == pattern.size()) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    string s, p;
    cin >> s >> p;

    // Make s(string) a ring
    rep(i, p.size()) {
        s.push_back(s[i]);
    }

    if (contains_pattern(s, p)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
