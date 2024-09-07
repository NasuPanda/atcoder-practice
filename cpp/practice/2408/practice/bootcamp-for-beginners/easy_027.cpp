#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long N,A,B; cin>>N>>A>>B;
    long long ans=0;
    ans += N / (A+B) * A;
    ans += min(A, N % (A+B));
    cout << ans << endl;
    return 0;
}
