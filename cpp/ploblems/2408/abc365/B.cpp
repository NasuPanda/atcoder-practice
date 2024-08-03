#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    long long A[N]; rep(i,N) {cin >> A[i];}
    long long max=0;
    int max_index=0;

    for(int i=0;i<N;i++) {
        if (max<A[i]) {
            max=A[i];
            max_index=i;
        }
    }
    A[max_index]=0;

    max=0; max_index=0;

    for(int i=0;i<N;i++) {
        if (max<A[i]) {
            max=A[i];
            max_index=i;
        }
    }

    cout << max_index + 1 << endl;

    return 0;
}
