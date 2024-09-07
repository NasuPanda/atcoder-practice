#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string str, command, p;
    int q, a, b;

    cin >> str >> q;
    rep(i, q) {
        cin >> command;
        if (command == "replace") {
            cin >> a >> b >> p;
            rep(j, p.size()) {
                str[a+j] = p[j];
            }
        } else if (command == "reverse") {
            string tmp;
            cin >> a >> b;
            rep(j, b-a+1) {
                tmp.push_back(str[a+j]);
            }
            rep(j, tmp.size()) {
                str[a+j] = tmp[tmp.size()-1-j];
            }
        } else if (command == "print") {
            cin >> a >> b;
            rep(j, b-a+1) {
                cout << str[j+a];
            }
            cout << endl;
        }
    }
    return 0;
}
