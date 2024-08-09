#include <bits/stdc++.h>
using namespace std;
/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll H,W,ans; cin>>H>>W;
    ll area=H*W;
    if(H==1||W==1) {ans=1;}
    else if(area%2 == 0) {ans=area/2;}
    else {ans=floor(area/2)+1;}
    cout << ans << endl;
    return 0;
}
