#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A,B; cin >> A >> B;
    int plugs=1, count=0;

    while(!(plugs >= B)) {
        plugs += (A-1);
        count++;
    }
    cout << count << endl;
    return 0;
}
