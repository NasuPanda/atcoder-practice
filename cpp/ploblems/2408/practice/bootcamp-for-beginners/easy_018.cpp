#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool ACGT_is_in(char c) {
    if (c=='A' || c=='C' || c=='G' || c=='T') {
        return true;
    } else {
        return false;
    }
}

int main() {
    string S; cin>>S;
    int count=0, max=0;
    rep(i, S.size()) {
        if (ACGT_is_in(S[i])) {
            count++;
        } else {
            count = 0;
        }
        if (max < count) {
            max = count;
        }
    }
    cout << max;
    return 0;
}
