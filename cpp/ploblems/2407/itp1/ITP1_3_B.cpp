#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int x, case_number=0;
    cin >> x;

    while (x != 0) {
        case_number++;
        cout << "Case " << case_number << ": " << x << "\n";
        cin >> x;
    }
    return 0;
}
