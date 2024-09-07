#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S; cin >> S;

    int n=0,w=0,s=0,e=0;

    rep(i, S.size()) {
        if (S[i] == 'N') n++;
        else if (S[i] == 'W') w++;
        else if (S[i] == 'S') s++;
        else if (S[i] == 'E') e++;
    }

    if (n != s) cout << "No";
    else if (w != e) cout << "No";
    else cout << "Yes";

	return 0;
}
