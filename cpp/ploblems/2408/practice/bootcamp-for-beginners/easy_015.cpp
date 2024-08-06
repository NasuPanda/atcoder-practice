#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin>>N;
    vector<int> d; int tmp; rep(i,N) {cin>>tmp; d.push_back(tmp);}
    sort(d.begin(),d.end());
    int a=d[d.size()/2-1], b=d[d.size()/2];
    if (a==b) {cout << 0;}
    else {cout << b-a;}
    return 0;
}
