#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int arr[3];
    rep(i, 3) {
        cin >> arr[i];
    }
    sort(arr, arr+3);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    return 0;
}
