#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int digits_sum_from_string(string str_number) {
    int sum=0;
    rep(i, str_number.size()) {
        sum+=int(str_number[i] - 48);
    }
    return sum;
}

int main() {
    string x;
    while(true) {
        cin >> x;
        if (x == "0") {
            break;
        }
        cout << digits_sum_from_string(x) << endl;
    }
    return 0;
}
