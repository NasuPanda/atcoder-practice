#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, x, count=0;
    while(true) {
        cin >> n >> x;
        if (n==0 && x==0) { break; }

        for(int i=1; i<=n-2; i++) {
            for(int j=i+1; j<=n; j++) {
                for(int k=j+1; k<=n; k++) {
                    // cout << i << " " << j << " " << k << endl;
                    if (i != j && i != k && j != k) {
                        if (i+j+k == x) {
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}
