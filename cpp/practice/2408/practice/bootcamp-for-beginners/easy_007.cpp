#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A[3][3];
    rep(i,3) {rep(j,3) cin>>A[i][j]; }
    int N; cin >> N;
    int b;
    rep(i,N) {
        cin >> b;
        rep(i,3) {
            rep(j,3) {
                if (A[i][j]==b){
                    A[i][j]=-1;
                }
            }
        }
    }
    // rows
    rep(i,3){
        if(A[i][0] + A[i][1] + A[i][2] == -3) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    // columns
    rep(i,3){
        if(A[0][i] + A[1][i] + A[2][i] == -3) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (A[0][0] + A[1][1] + A[2][2] == -3) {
        cout << "Yes" << endl;
        return 0;
    }
    if (A[0][2] + A[1][1] + A[2][0] == -3) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
