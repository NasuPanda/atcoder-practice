#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int cnt=0;
    string s;
    cin >> s;
    rep(i,3) {
        if(s[i]=='1') {cnt++;}
    }
    cout << cnt << endl;
    return 0;
}
