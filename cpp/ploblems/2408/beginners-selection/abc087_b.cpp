#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A,B,C,X; cin >> A >> B >> C >> X;
    int tmp;
    int count=0;

    rep(i,A+1) {
        rep(j,B+1) {
            tmp = X - 500*i - 100*j;
            // rep(k,C+1) {
            // if (500*i+100*j+50*k == X) {count++;}
            // }
            if (0<=tmp && tmp<= 50*C) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
