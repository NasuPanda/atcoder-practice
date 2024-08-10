#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,T,A; cin>>N>>T>>A;
    int diff;
    if (T==A) {
        cout<<"No"<<endl;
        return 0;
    }
    if (T>A) {
        diff = T-A;
    } else {
        diff = A-T;
    }
    if (diff>(N-T-A)) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return 0;
}
