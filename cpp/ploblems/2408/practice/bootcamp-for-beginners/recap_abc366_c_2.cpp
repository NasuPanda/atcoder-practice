#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int Q;
    cin >> Q;
    vector<int> balls(1000000, 0);
    int command, x, ans=0;
    rep(i, Q) {
        cin >> command;
        switch (command)
        {
        case 1:
            cin >> x;
            x--;
            if (balls[x] == 0) ans++;
            balls[x]++;
            break;
        case 2:
            cin >> x;
            x--;
            if (balls[x] == 1) ans--;
            balls[x]--;
            break;
        case 3:
            cout << ans << endl;
            break;
        }
    }
    return 0;
}
