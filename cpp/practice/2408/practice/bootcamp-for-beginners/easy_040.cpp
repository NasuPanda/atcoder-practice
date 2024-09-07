#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long a,b;
    cin >> a >> b;
    if (a*b <= 0) {
        cout << "Zero" << endl;
        return 0;
    }
    if (a>0 && b>0) {
        cout << "Positive" << endl;
        return 0;
    }
    if (abs(a-b) % 2 == 0) {
        cout << "Negative";
    } else {
        cout << "Positive";
    }
    return 0;
}
