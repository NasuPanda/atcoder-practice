#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string S, T;

string str_rotate_right(string str) {
    int len = str.size();
    if( len <= 1 ) {
        return str;
    }
    char c = str[len-1];
    for(int i = len - 1; i > 0; --i) {
        str[i] = str[i-1];
    }
    str[0] = c;
    return str;
}

int main() {
    cin >> S >> T;
    rep(i, 100) {
        S = str_rotate_right(S);
        if (S == T) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
	return 0;
}
