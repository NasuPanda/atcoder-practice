#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,M,C; cin >> N >> M >> C;
    int B[M]; rep(i,M) {cin >> B[i];}
    int A[N][M]; rep(i,N) {rep(j,M) {cin >> A[i][j];}}

    int count=0, sum=0;
    rep(i,N) {
        rep(j,M) {
            sum += (A[i][j] * B[j]);
        }
        sum += C;
        if (sum > 0) {
            count++;
        }
        sum = 0;
    }
    cout << count << endl;
    return 0;
}
