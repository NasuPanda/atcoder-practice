#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S; cin>>S;
    vector<int> wordCount(26);
    for (auto c : S) wordCount[c-'a']++;
    for (auto x : wordCount){
        if (x > 1) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
