#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N;
    cin >> N;
    vector<ll> A(N+1), B(N);
    rep(i, 0, N+1) cin >> A[i];
    rep(i, 0, N) cin >> B[i];
    ll ans = 0;
    rep(i, 0, N) {
        ll numOfMonsters = A[i];
        ll numOfMonstersNear = A[i+1];
        ll saverPower = B[i];
        // When the enemy is weaker than the saver
        if (saverPower > numOfMonsters) {
            ans += numOfMonsters;
            saverPower -= numOfMonsters;
            // A[i] = 0;
            // When the saver is like, `Huh, is this it?`
            if (saverPower > numOfMonstersNear) {
                ans += numOfMonstersNear;
                A[i+1] = 0;
            // When the saver is like, `Well, I'm tired. I'll leave the rest to him.`
            } else {
                ans += saverPower;
                A[i+1] -= saverPower;
            }
        }
        // When the saver is pushing against his/her limit!
        else {
            ans += saverPower;
            // A[i] -= saverPower;
        }
    }
    cout << ans << endl;
    return 0;
}
