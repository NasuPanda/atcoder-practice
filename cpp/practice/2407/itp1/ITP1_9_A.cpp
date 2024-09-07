#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string to_lowercase(string s) {
    rep(i, s.size()) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] ^ 32;
        }
    }
    return s;
}

int main() {
    string word, t;
    vector<string> texts;
    cin >> word;
    while(cin >> t) {
        if (t == "END_OF_TEXT") {
            break;
        }
        texts.push_back(t);
    }

    int count = 0;
    rep(i, texts.size()) {
        if (word == to_lowercase(texts[i])) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
