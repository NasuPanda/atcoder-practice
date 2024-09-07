#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin>>N;
    vector <long long> A(N);
    for (auto& a : A) cin >> a;
    int count=0;
    while(true) {
        for (auto& a : A) {
            if (a%2==1) {
                cout<<count<<endl;
                return 0;
            }
            a/=2;
        }
        count++;
    }
    return 0;
}
