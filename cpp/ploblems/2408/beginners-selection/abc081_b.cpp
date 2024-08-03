#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_every_val_even(int n, int arr[]) {
    rep(i, n) {
        if(arr[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    int A[N];
    rep(i,N) {cin >> A[i];}

    int cnt=0;
    while (is_every_val_even(N, A)) {
        cnt++;
        rep(i,N) {A[i] /= 2;}
    }
    cout << cnt << endl;
    return 0;
}
