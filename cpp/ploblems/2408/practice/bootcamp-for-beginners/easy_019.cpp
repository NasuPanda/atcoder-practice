#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,M,X; cin>>N>>M>>X;
    int gates[N+1]; rep(i,N+1){gates[i]=0;}
    int tmp; rep(i,M){cin>>tmp; gates[tmp]++;}
    int cost=0, min_cost=10000;
    // start ~ X
    for(int i=0; i<X; i++) {
        cost += gates[i];
    }
    if (cost < min_cost) {min_cost=cost;}
    cost=0;
    // X ~ end
    for(int i=X; i<=N; i++) {
        cost += gates[i];
    }
    if (cost < min_cost) {min_cost=cost;}
    cout << min_cost << endl;
    return 0;
}
