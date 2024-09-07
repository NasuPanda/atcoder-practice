#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a,b,c,d,e;
    int li[5];
    for (auto& l : li) cin >> l ;
    int min_remainder=10, min_index;
    for (int i=0; i<5; ++i) {
        if (li[i]%10 < min_remainder && li[i]%10 != 0) {
            min_remainder = li[i]%10;
            min_index=i;
        }
    }
    int ans=0;
    for (int i=0; i<5; ++i) {
        if (i==min_index) {
            ans += li[i];
        } else {
            ans += 10 * ceil(li[i]/10.0);
        }
    }
    cout << ans << endl;
    return 0;
}
