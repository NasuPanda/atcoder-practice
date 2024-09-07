#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto& a : A) cin >> a;

    int max = *std::max_element(A.begin(), A.end());
    int numberOfMax=0;
    for (auto a : A) if(a==max) numberOfMax++;

    if (numberOfMax!=1) {
        rep(i,N) {cout<<max<<endl;}
    } else {
        int secondMax=0;
        for (auto a : A) {
            if (a>secondMax) {
                if (a!=max) {
                    secondMax=a;
                }
            }
        }
        for (auto a : A) {
            if (a==max) cout << secondMax << endl;
            else cout << max << endl;
        }
    }
    return 0;
}
