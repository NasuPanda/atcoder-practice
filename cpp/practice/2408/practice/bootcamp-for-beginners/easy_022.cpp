#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; long long x; cin>>N>>x;
    vector<long long> a; long long tmp; rep(i,N) {cin>>tmp; a.push_back(tmp);}
    sort(a.begin(),a.end());
    int count=0;
    rep(i,N) {
        x-=a[i];
        if (x>0) {
            count++;
        } else {
            if (x==0) {
                count++;
            }
            break;
        }
    }
    if (x>0) {
        count--;
    }
    cout << count;
    return 0;
}
