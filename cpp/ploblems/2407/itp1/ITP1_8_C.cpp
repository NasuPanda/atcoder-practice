#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int count[26];
    rep(i, 26) { count[i] = 0; }

    std::vector<std::string> words;
    std::string in;
    while (std::cin >> in)
    {
        words.push_back(in);
    }

    string tmp;
    rep(i, words.size()) {
        tmp = words[i];
        rep(j, tmp.size()) {
            // Lowercase: a-z = 97-122
            if (tmp[j] >= 'a' && tmp[j] <= 'z') {
                count[int(tmp[j] - 97)]+=1;
            // Uppercase: A-Z = 65-90
            } else if (tmp[j] >= 'A' && tmp[j] <= 'Z') {
                count[int(tmp[j] - 65)]+=1;
            }
        }
    }

    rep(i, 26) {
        cout << char('a' + i) << " : " << count[i] << endl;
    }

    return 0;
}
