#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string popBackZero(string S) {
    int N = S.size();
    if (S[N-1] == '0') S.pop_back();
    return S;
}

int main() {
    string X;
    cin >> X;
    rep(i, 3) X = popBackZero(X);
    int N = X.size();
    if (X[N-1] == '.') X.pop_back();
    cout << X << endl;
    return 0;
}
