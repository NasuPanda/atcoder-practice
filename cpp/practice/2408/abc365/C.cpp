#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long min(long long a, long long b) {
    if (a > b) { return b; }
    else return a;
}

int main() {
    long long N,M; cin >> N >> M;
    long long A[N];
    rep(i,N) {
        cin >> A[i];
    }

    // sum check
    long long sum=0;
    rep(i,N) { sum += A[i]; }
    if (sum <= M) {
        cout << "infinite" << endl;
        return 0;
    }

    long long x=M/N, sum_of_subsidy=0;

    while(true) {
        rep(i,N) {
            sum_of_subsidy += min(x, A[i]);
        }

        if (sum_of_subsidy <= M) {
            break;
        }
        sum_of_subsidy=0;
        x--;
    }
    cout << x << endl;
    return 0;
}
