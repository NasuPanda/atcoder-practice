#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s; cin >> s;
    int num = s.size();
    int indexOfA, indexOfZ;

    // 前から探索してAを見つける
    rep(i, num) {
        if (s[i] == 'A') {
            indexOfA = i;
            break;
        }
    }

    // 後ろから探索してZを
    for (int i=num; i>0; i--) {
        if (s[i] == 'Z') {
            indexOfZ = i;
            break;
        }
    }

    cout << indexOfZ - indexOfA + 1;

	return 0;
}
