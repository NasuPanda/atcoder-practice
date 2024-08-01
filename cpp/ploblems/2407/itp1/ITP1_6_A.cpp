#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int arr[n];
    rep(i, n) {
        cin >> arr[i];
    }

    rep(i, n) {
        if (i != n-1) {
            cout << arr[n-i-1] << " ";
        } else {
            cout << arr[n-i-1];
        }
    }
    cout << endl;
    return 0;
}
