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
    const string CORRECT = "AC", WRONG = "WA";
    vector<int> wrongAnswers(N);
    vector<bool> solved(N, false);

    rep(i,0, M) {
        int p;
        string s;
        cin >> p >> s;
        p--;
        if (s == CORRECT) solved[p] = true;
        if (s == WRONG && !solved[p]) wrongAnswers[p]++;
    }
    int AC=0, WA=0;
    rep(i, 0, N) if (solved[i]) {
        AC ++;
        WA += wrongAnswers[i];
    }
    cout << AC << " " << WA << endl;
    return 0;
}
