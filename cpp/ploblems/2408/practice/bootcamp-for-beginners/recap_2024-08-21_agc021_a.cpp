#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    string N;
    cin >> N;
    int c = N[0] - '0';
    int length = N.size();
    for (int i=1; i<length; ++i) {
        if (N[i] - '0' != 9) {
            cout << (c-1) + (length-1)*9 << endl;
            return 0;
        }
    }
    cout << c + (length - 1) * 9 << endl;
    return 0;
}
