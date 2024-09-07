#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    if (64<=N && N<=100)    { cout << 64 << endl; }
    else if (32<=N && N<64) { cout << 32 << endl; }
    else if (16<=N && N<32) { cout << 16 << endl; }
    else if (8<=N && N<16)  { cout << 8 << endl; }
    else if (4<=N && N<8)   { cout << 4 << endl; }
    else if (2<=N && N<4)   { cout << 2 << endl; }
    else                    { cout << 1 << endl; }
    return 0;
}
