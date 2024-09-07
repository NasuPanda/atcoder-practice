#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> AC(N), WA(N);

    rep(i, 0, M) {
        int p;
        string s;
        cin >> p >> s;
        p--;
        if (s == "AC") {
            if (AC[p] == 0) AC[p]++;
        } else {
            if (!AC[p]) WA[p]++;
        }
    }
    ll correctAnswers=0, penalties=0;
    // Count
    rep(i, 0, N) {
        if (AC[i]) {
            correctAnswers++;
            penalties += WA[i];
        }
    }
    cout << correctAnswers << " " << penalties << endl;
}
