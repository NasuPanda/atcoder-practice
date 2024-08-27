#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N; cin >> N;
    string S; cin >> S;
    int ans=0;

    rep(i, 0, N-1) {
        vector<int> A(51);
        int cnt=0;

        rep(j, 0, N) {
            char c = S[j];
            int index = c - 'a';
            if (j > i) {
                if(A[index] != 0 && A[26+index] == 0) {
                    cnt++;
                }
                A[26+index]++;
            }
            else {
                A[index]++;
            }
        }
        // rep(i, 0, 52) cout<<A[i]<<" ";
        // cout<<endl;

        chmax(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
