#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int K,N; cin>>K>>N;
    vector<int> A; int tmp; rep(i,N){cin>>tmp; A.push_back(tmp);}
    sort(A.begin(),A.end());
    int max_distance=A[0] + (K-A[size(A)-1]),distance;
    rep(i,N) {
        distance = A[i+1] - A[i];
        if (distance > max_distance) {
            max_distance=distance;
        }
    }
    cout << K - max_distance << endl;
    return 0;
}
