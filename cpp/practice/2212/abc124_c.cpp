#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc124/tasks/abc124_c
// ビット演算でなぜ解けなかったのかわからん。。

// int main() {
//     string S; cin >> S;
//     int sizeOfS = S.size();
//     const int SIZE = 1000000;

//     // 入力文字列をビット列に変換
//     bitset<SIZE> b0;
//     for (int i=0; i<sizeOfS; i++) {
//         // 入力は右から順なのでsizeから色々引いた値の場所にセット
//         // '1/0'をそのまま変換すると48,49になるので-48する
//         b0.set(SIZE-i-1, int(S.at(i))-48);
//     }

//     // 交互に01が登場する長さSのビット列を作る
//     bitset<SIZE> b1;
//     for (int i=0; i<sizeOfS; i+=2) {
//         b1.set(SIZE-i-1);
//     }
//     // b1 を反転させたビット列を作る(左シフト演算)
//     bitset<SIZE> b2 = (b1 << 1);

//     cout << b0 << endl << b1 << endl << b2 << endl;

//     // XORする
//     auto b01 = b0 ^ b1;
//     auto b02 = b0 ^ b2;
//     cout << b01 << endl << b02 << endl;
//     if (b01.count() < b02.count()) cout << b01.count();
//     else cout << b02.count();

//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin>>S;

    int ans1=0,ans2=0;
    for(int i=0;i<S.size();i++){
        if(S[i]!=i%2+'0') ans1++;
        if(S[i]!='1'-i%2) ans2++;
    }

    cout<<min(ans1,ans2)<<endl;
}
