#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string a,b; cin >> a >> b;
    string c=a+b;
    int num=stoi(c);
    for(int i=1; i<=400; i++) {
        if (i*i == num) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
