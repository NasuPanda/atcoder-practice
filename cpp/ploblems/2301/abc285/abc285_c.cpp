#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int alphaToNum(char alpha) {
    return int(alpha) - 64;
}

int main() {
    string S; cin >> S;
    long long ans=0;
    int length = S.size();

    // 右から順に
    for (int i=0; i<length; i++) {
        long long tmp=1;
        rep(_, i) tmp *= 26;
        ans += tmp * alphaToNum(S.at(length-1-i));
    }
    cout << ans << endl;
	return 0;
}
