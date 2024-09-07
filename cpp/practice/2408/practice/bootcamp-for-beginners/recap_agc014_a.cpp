#include <bits/stdc++.h>
using namespace std;
/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll A,B,C; cin>>A>>B>>C;
    if (A%2==1 | B%2==1 | C%2==1) {
        cout << 0 << endl;
        return 0;
    }

    ll tmpA, tmpB, tmpC;
    for(int i=1; i<=100; i++) {
        tmpA = (B+C)/2;
        tmpB = (C+A)/2;
        tmpC = (A+B)/2;
        if (tmpA%2==1 || tmpB%2==1 || tmpC%2==1) {
            cout << i << endl;
            return 0;
        }
        A=tmpA; B=tmpB; C=tmpC;
    }
    cout << -1 << endl;
    return 0;
}
