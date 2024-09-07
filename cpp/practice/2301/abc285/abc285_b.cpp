#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    vector<char> S(N+1);
    for (int i=1; i<=N; i++) cin >> S.at(i);

    for (int i=1; i<N; i++) {
        int l=0;
        bool skip=false;
        for (int k=1; k<=N-i; k++) {
            if (S.at(k) == S.at(k+i)) skip = true;
            if (skip) continue;
            // cout << "S" << k << "=" << S.at(k) << " S" << k+i << "=" << S.at(k+i) << endl;
            l = k;
        }
        cout << l << endl;
    }
	return 0;
}
