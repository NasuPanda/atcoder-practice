#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    vector<string> S(N); rep(i,N) cin >> S[i];
    map<string, int> dict;

    int maxNum = 1;
    rep(i, N) {
        string key = S[i];
        // map型存在判定
        if (dict.count(key)) {
                dict[key]++;
                if (maxNum <= dict[key]) maxNum = dict[key];
            }
        else dict[key] = 1;
    }

    for (const auto& [key, value] : dict){
        if (value == maxNum) cout << key << endl;
    }

	return 0;
}
