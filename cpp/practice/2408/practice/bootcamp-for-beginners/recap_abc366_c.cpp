#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q; cin>>q;
    int command, x, ans=0;
    vector<int> balls(1000000);
    rep(i, q) {
        cin >> command;
        switch (command)
        {
        case 1:
            cin >> x;
            x--;
            balls[x]++;
            if (balls[x]==1) {ans++;}
            break;
        case 2:
            cin >> x;
            x--;
            balls[x]--;
            if (balls[x]==0) {ans--;}
            break;
        case 3:
            cout << ans << endl;
            break;
        default:
            cout << "ERROR" << endl;
            return 0;
        }
    }
}
