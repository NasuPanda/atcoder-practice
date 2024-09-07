#include <bits/stdc++.h>
using namespace std;
/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isEvenString(string s) {
    int N = s.size();
    int startIndexOfRight = N/2;
    for (int i=0; i<startIndexOfRight; ++i) {
        // cout << s[i] << " " << s[i+startIndexOfRight] << " ";
        if (!(s[i] == s[i+startIndexOfRight])) {
            return false;
        }
    }
    return true;
}

int main() {
    string S;
    cin >> S;
    S.pop_back();
    S.pop_back();
    while (!isEvenString(S)) {
        S.pop_back();
        S.pop_back();
    }
    cout << S.size() << endl;
    return 0;
}
