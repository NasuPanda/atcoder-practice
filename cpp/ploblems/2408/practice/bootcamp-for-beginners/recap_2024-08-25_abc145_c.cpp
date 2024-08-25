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
    vector<pair<int, int>> towns(N);
    vector<int> townNumbers(N);
    rep(i, 0, N) {
        int x, y;
        cin >> x >> y;
        towns[i] = make_pair(x, y);
        townNumbers[i] = i;
    }
    double sum=0, divider=0;
    do {
        rep(i, 0, N-1) {
            pair<int, int> townA = towns[townNumbers[i]];
            pair<int, int> townB = towns[townNumbers[i+1]];
            sum += sqrt(
                pow(townA.first - townB.first, 2) + pow(townA.second - townB.second, 2)
            );
        }
        divider++;
    } while (next_permutation(all(townNumbers)));
    cout << fixed << setprecision(10);
    cout << sum / divider << endl;
    return 0;
}
