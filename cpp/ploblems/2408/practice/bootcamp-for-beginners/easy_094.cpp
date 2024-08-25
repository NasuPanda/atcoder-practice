#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string S;
    cin >> S;
    rep(msk, 0, 1 << 3) {
        int sm = S[0] - '0';
        rep(i, 0, 3) {
            if (msk & (1 << i)) sm += (S[i+1] - '0');
            else sm -= (S[i+1] - '0');
        }
        if (sm == 7) {
            cout << S[0];
            rep(i, 0, 3) {
                if (msk & (1 << i)) cout<<"+";
                else cout<<"-";
                cout<<S[i+1];
            }
            cout<<"=7"<<endl;
        }
    }
    return 0;
}

// int main() {
//     string ABCD;
//     cin >> ABCD;
//     int A = ABCD[0] - '0';
//     int B = ABCD[1] - '0';
//     int C = ABCD[2] - '0';
//     int D = ABCD[3] - '0';
//     char a = ABCD[0];
//     char b = ABCD[1];
//     char c = ABCD[2];
//     char d = ABCD[3];
//     string ans;
//     if (A + B + C + D == 7) ans = {(char)a,'+',(char)b,'+',(char)c,'+',(char)d};
//     if (A + B - C + D == 7) ans = {(char)a,'+',(char)b,'-',(char)c,'+',(char)d};
//     if (A + B + C - D == 7) ans = {(char)a,'+',(char)b,'+',(char)c,'-',(char)d};
//     if (A + B - C - D == 7) ans = {(char)a,'+',(char)b,'-',(char)c,'-',(char)d};
//     if (A - B + C + D == 7) ans = {(char)a,'-',(char)b,'+',(char)c,'+',(char)d};
//     if (A - B - C + D == 7) ans = {(char)a,'-',(char)b,'-',(char)c,'+',(char)d};
//     if (A - B + C - D == 7) ans = {(char)a,'-',(char)b,'+',(char)c,'-',(char)d};
//     if (A - B - C - D == 7) ans = {(char)a,'-',(char)b,'-',(char)c,'-',(char)d};
//     ans.push_back('=');
//     ans.push_back('7');
//     cout << ans << endl;
//     return 0;
// }
