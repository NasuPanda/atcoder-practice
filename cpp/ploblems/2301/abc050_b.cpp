#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N;
vector<int> T(109);
int M;
vector<int> P(109), X(109);

int main() {
    cin >> N;
    for(int i=1; i<=N; i++) cin >> T[i];
    cin >> M;
    for(int i=1; i<=M; i++) cin >> P[i] >> X[i];

    for(int i=1; i<=M; i++) {
        int totalTime = 0;
        int problem = P.at(i);
        int time = X.at(i);

        for(int j=1; j<=N; j++) {
            if (j == problem) totalTime += time;
            else totalTime += T.at(j);
        }

        cout << totalTime << endl;
    }
	return 0;
}
