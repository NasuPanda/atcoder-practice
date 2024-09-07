#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A, B; cin >> A >> B;
    int ans;

    for(int i=1; i<=1000; i++) {
        if (floor(i*0.08) == A && floor(i*0.1) == B) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
