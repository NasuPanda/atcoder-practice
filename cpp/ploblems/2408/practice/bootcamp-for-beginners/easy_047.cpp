#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<long long> lucasNumber(87);
    lucasNumber[0] = 2;
    lucasNumber[1] = 1;
    for (int i=2; i<=N; ++i) {
        lucasNumber[i] = lucasNumber[i-1] + lucasNumber[i-2];
    }
    cout << lucasNumber[N] << endl;
    return 0;
}
