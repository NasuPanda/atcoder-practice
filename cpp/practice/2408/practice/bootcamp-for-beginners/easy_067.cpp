#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S) cin >> s;
    map<string, int> results;
    for (auto s : S) results[s]++;
    int maxVote=0;
    for (const auto& [key, value] : results){
        maxVote = max(maxVote, value);
    }
    for (const auto& [key, value] : results){
        if (value == maxVote) cout << key << endl;
    }
    return 0;
}
