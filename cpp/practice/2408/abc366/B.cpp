#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin>>N;
    vector<string> S; string tmp;
    int M=0;
    rep(i,N) {
        cin>>tmp;
        S.push_back(tmp);
        if(tmp.size() > M) {
            M=tmp.size();
        }
    }
    int strLength;
    int edgeLength=S[0].size();
    for(int i=1; i<N; i++) {
        strLength=S[i].size();
        if (strLength>=edgeLength) {
            edgeLength=strLength;
        } else {
            rep(j, edgeLength-strLength) {
                S[i].push_back('*');
            }
        }
    }
    string T[M]; rep(i,M) {T[i] = "";}
    for(int i=N-1; i>=0; i--) {
        rep(j,S[i].size()) {
            T[j].push_back(S[i][j]);
        }
    }
    rep(i,M) {
        cout << T[i] << endl;
    }
    return 0;
}
