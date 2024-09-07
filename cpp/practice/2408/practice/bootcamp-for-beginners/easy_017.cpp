#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin>>N;
    vector<int> v; int tmp; rep(i,N) {cin>>tmp; v.push_back(tmp);}
    sort(v.begin(),v.end());
    double value=v[0];
    for(int i=1; i<N-1; i++) {
        value=(value+v[i])/2.0;
    }
    cout << (value+v[v.size()-1])/2.0 << endl;
    return 0;
}
