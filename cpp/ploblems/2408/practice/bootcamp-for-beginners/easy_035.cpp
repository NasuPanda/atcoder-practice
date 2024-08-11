#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S; cin >> S;
    vector<int> wordCount(26);
    for (auto c : S) wordCount[c-'a']++;
    for (int i=0; i<26; ++i) {
        int count = wordCount[i];
        if (count == 0) {
            cout << char('a'+i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
