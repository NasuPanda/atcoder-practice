#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> W(N);
    for (auto &w : W) cin >> w;
    int tailLoc = W[0].size() - 1;
    char tail=W[0][tailLoc], head;
    for(int i=1; i<N; ++i) {
        head = W[i][0];
        // cout << "Tail: " << tail << " Head: " << head << endl;
        if (tail != head) {
            cout << "No" << endl;
            return 0;
        }
        tailLoc = W[i].size() - 1;
        tail = W[i][tailLoc];
    }
    sort(W.begin(), W.end());
    rep(i, N-1) {
        if (W[i] == W[i+1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
