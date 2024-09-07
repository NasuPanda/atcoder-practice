#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long N; cin >> N;
    ++N;

    long long res = 0;
    while (N) {
        if (N < 10) res += (N-1);
        else res+=9;
        N /= 10;
    }

    cout << res << endl;

	return 0;
}
