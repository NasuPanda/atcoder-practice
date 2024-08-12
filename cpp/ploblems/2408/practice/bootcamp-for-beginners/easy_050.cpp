#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string A, B;
    cin >> A >> B;
    string ans;
    int aSize=A.size(), bSize=B.size();
    if (A == B) ans = "EQUAL";
    else if (aSize > bSize) ans = "GREATER";
    else if (aSize < bSize) ans = "LESS";
    // When aSize==bSize
    else {
        for (int i=0; i<aSize; i++) {
            int a = A[i] - '0';
            int b = B[i] - '0';
            if (a > b) {
                ans = "GREATER";
                break;
            } else if (a < b) {
                ans = "LESS";
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
