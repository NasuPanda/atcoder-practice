#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;cin>>N;
    int ans[N], tmp;
    for(int i=1;i<=N;i++) {
        cin>>tmp;
        ans[tmp-1]=i;
    }
    rep(i,N-1) cout<< ans[i] << " ";
    cout << ans[N-1] << endl;
    return 0;
}
