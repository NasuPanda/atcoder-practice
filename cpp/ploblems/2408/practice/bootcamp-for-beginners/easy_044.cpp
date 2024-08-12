#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int N = S.size();
    int diffA=0, diffB=0;
    for (int i=0; i<N; i++) {
        char c;
        if (i%2==0) c='0';
        else c='1';
        if (S[i]!=c) diffA++;
    }
    for (int i=0; i<N; i++) {
        char c;
        if (i%2==1) c='0';
        else c='1';
        if (S[i]!=c) diffB++;
    }
    cout << min(diffA,diffB) << endl;
    return 0;
}
