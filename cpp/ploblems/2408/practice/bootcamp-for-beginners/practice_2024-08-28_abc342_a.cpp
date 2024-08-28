#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    // vector<int> count(26,0);
    // string S; cin >> S;
    // for (auto c : S) count[c - 'a']++;
    // int unique;
    // rep(i, 0, 26) if (count[i] == 1) unique=i;
    // char wanted = (char)unique+'a';
    // rep(i, 0, S.size()) if (S[i] == wanted) cout << i+1 << endl;
    string S; cin >> S;
    char majority;
    char a=S[0], b=S[1], c=S[2];
    if (a == b) majority = a;
    if (b == c) majority = b;
    if (c == a) majority = c;
    rep(i, 0, S.size()) if (S[i] != majority) cout << i+1 << endl;
    return 0;
}
