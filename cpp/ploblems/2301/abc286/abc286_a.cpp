#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc286

int N,P,Q,R,S;
vector<int> A(109), B(109);

int main() {
    cin >> N >> P >> Q >> R >> S;
    for(int i=1; i<=N; i++) cin >> A[i];

    for (int i=1; i<=P; i++) B[i] = A[i];

    vector<int> buff(109);
    for (int i=P; i<=Q; i++) buff[i] = A[i];
    reverse(buff.begin(), buff.end());
    for (int i=P; i<=Q; i++) B[i] = buff[i];

    vector<int> buff2(109);
    for (int i=R; i<=S; i++) buff2[i] = A[i];
    reverse(buff2.begin(), buff2.end());
    for (int i=R; i<=S; i++) B[i] = buff2[i];

    for (int i=R; i<=N; i++) B[i] = A[i];

    for (int i=1; i<=N; i++) cout << B[i];
	return 0;
}
