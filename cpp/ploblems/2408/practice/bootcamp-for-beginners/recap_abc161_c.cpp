#include <bits/stdc++.h>
#include <cmath>
using namespace std;
/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll N,K; cin>>N>>K;
    cout << min(N%K, abs(N%K-K)) << endl;
    return 0;
}
