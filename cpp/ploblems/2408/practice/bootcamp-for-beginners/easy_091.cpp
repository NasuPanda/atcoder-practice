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
    vector<int> X(N), Y(N);
    rep(i, 0, N) {
        cin >> X[i] >> Y[i];
    }

    vector<int> townNumbers;
    rep(i, 0, N) townNumbers.push_back(i);

    long double sum=0;
    int numberOfRoutes=0;
    do {
        rep(i, 0, N-1) {
            double startX, destX, startY, destY;
            startX = X[townNumbers[i]];
            destX = X[townNumbers[i+1]];
            startY = Y[townNumbers[i]];
            destY = Y[townNumbers[i+1]];
            sum += sqrt(
                pow(startX - destX, 2) + pow(startY - destY, 2)
            );
        }
        numberOfRoutes++;
    } while(next_permutation(all(townNumbers)));
    // cout << "sum is " << sum << ", and the number of routes is " << numberOfRoutes << endl;
    cout << fixed << setprecision(10);
    cout << sum / numberOfRoutes << endl;
    return 0;
}
