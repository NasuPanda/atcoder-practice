#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    vector<vector<int>> C(3, vector<int>(3));
    rep(i, 0, 3) rep(j, 0, 3) cin >> C[i][j];

    int a1 = 0;
    int b1 = C[0][0] - a1;
    int b2 = C[0][1] - a1;
    int b3 = C[0][2] - a1;
    int a2 = C[1][0] - b1;
    int a3 = C[2][0] - b1;

    string ans = "Yes";
    if (!(C[1][1] == a2+b2)) ans = "No";
    if (!(C[1][2] == a2+b3)) ans = "No";
    if (!(C[2][1] == a3+b2)) ans = "No";
    if (!(C[2][2] == a3+b3)) ans = "No";
    cout << ans << endl;

    // vector<int> C(9);
    // rep(i,0,9) cin >> C[i];

    // string ans = "Yes";

    // int Xa=C[0]-C[1]; // b1 - b2
    // int Xb=C[1]-C[2]; // b1 - b3
    // int Xc=C[0]-C[2]; // b2 - b3

    // int Ya=C[3]-C[4]; // b1 - b2
    // int Yb=C[4]-C[5]; // b1 - b3
    // int Yc=C[3]-C[5]; // b2 - b3

    // int Za=C[6]-C[7]; // b1 - b2
    // int Zb=C[7]-C[8]; // b1 - b3
    // int Zc=C[6]-C[8]; // b2 - b3

    // if (!(Xa == Ya && Ya == Za)) ans = "No";
    // if (!(Xb == Yb && Yb == Zb)) ans = "No";
    // if (!(Xc == Yc && Yc == Zc)) ans = "No";

    // cout << ans << endl;

    // return 0;
}
