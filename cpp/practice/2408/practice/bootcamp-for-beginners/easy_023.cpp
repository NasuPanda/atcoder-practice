#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,D,X; cin>>N>>D>>X;
    int A[N]; rep(i,N) {cin>>A[i];}
    int sum=0;
    rep(i,N) {
        for (int j=0; j<D; j+=A[i]) {
            // cout << i << " " << j << " ";
            sum++;
        }
        X+=sum;
        sum=0;
    }
    cout << X << endl;
    return 0;
}
