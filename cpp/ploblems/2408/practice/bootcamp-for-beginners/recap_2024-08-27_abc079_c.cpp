#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string S; cin >> S;
    vector<int> X(4);
    rep(i, 0, 4) X[i] = S[i]-'0';

    rep(msk, 0, 1 << 3) {
        int sum=X[0];
        rep(i, 0, 3) {
            if (msk & (1<<i)) sum += X[i+1];
            else sum -= X[i+1];
        }
        if (sum == 7) {
            cout << X[0];
            rep(i, 0, 3) {
                if (msk & (1<<i)) cout<<'+'<<X[i+1];
                else cout<<'-'<<X[i+1];
            }
            cout << "=7" << endl;
            return 0;
        }
    }
    return 0;
}
