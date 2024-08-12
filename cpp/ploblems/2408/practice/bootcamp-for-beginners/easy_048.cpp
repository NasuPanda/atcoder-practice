#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<long long> H(N);
    for (auto& h : H) cin >> h;
    int ans=0;
    int count=0;
    for (int i=1; i<N; i++) {
        if (H[i-1] >= H[i]){
            count++;
            ans = max(ans, count);
        }
        else count=0;
    }
    cout << ans << endl;
    return 0;
}
