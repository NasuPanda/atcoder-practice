#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string ABCD; cin>>ABCD;
    int A = ABCD[0] - '0';
    int B = ABCD[1] - '0';
    int C = ABCD[2] - '0';
    int D = ABCD[3] - '0';
    vector<int> BCD={B, C, D};

    rep(msk, 0, 1<<3) {
        int sum=A;
        rep(i, 0, 3) {
            if (msk & (1<<i)) sum+=BCD[i];
            else sum-=BCD[i];
        }
        if (sum == 7) {
            cout << A;
            rep(i, 0, 3) {
                if (msk & (1<<i)) cout << '+';
                else cout << '-';
                cout << BCD[i];
            }
            cout << "=7" << endl;
            return 0;
        }
    }
    return 0;
}
