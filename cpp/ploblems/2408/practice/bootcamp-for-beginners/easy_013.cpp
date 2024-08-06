#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long A,B,C; cin>>A>>B>>C;
    long long tmpA=0,tmpB=0,tmpC=0;
    int count=0;
    if (A%2==1 | B%2==1 | C%2==1) {
        cout << 0 << endl;
        return 0;
    }
    if (A == B && B == C) {
        cout << -1 << endl;
        return 0;
    }
    // Time complexity is just log2(10^9), which is about 30
    // https://img.atcoder.jp/agc014/editorial.pdf
    for(long long i=0; i<30; i++) {
        count++;
        tmpA+=(B/2 + C/2); tmpB+=(C/2 + A/2); tmpC+=(A/2 + B/2);
        if (tmpA%2==1 | tmpB%2==1 | tmpC%2==1) {
            cout<<count<<endl;
            return 0;
        }
        A=tmpA; B=tmpB; C=tmpC;
    }
    cout << -1 << endl;
    return 0;
}
