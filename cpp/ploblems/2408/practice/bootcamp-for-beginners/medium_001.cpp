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
    int N; cin >> N;
    int A[N]; rep(i,N) {cin>>A[i];}
    int button_on=1;
    // The maximum number of attempt is N-1.
    for (int i=1; i<=N; i++) {
        button_on = A[button_on-1];
        if (button_on == 2) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
