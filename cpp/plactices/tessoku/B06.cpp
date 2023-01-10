#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const int MAX = 100009;
int N, Q;
vector<int> A(MAX), L(MAX), R(MAX), Atari(MAX), Hazure(MAX);

int main() {
    // 入力
    cin >> N;
    for (int i=1; i<=N; i++) cin >> A.at(i);
    cin >> Q;
    for (int i=1; i<=Q; i++) cin >> L.at(i) >> R.at(i);

    // 累積和を求める
    Atari.at(0) = 0;
    Hazure.at(0) = 0;
    for (int i=1; i<=N; i++) {
        Atari.at(i) = Atari.at(i-1); if(A.at(i) == 1) Atari.at(i)+=1;
        Hazure.at(i) = Hazure.at(i-1); if(A.at(i) == 0) Hazure.at(i)+=1;
    }

    // 回答出力
    for (int i=1; i<=Q; i++) {
        int numAtari = Atari.at(R.at(i)) - Atari.at(L.at(i) - 1);
        int numHazure = Hazure.at(R.at(i)) - Hazure.at(L.at(i) - 1);

        cout << numAtari << ' ' << numHazure << endl;

        if (numAtari > numHazure) cout << "win" << endl;
        else if (numAtari < numHazure) cout << "lose" << endl;
        else cout << "draw" << endl;
    }


    return 0;
}
