#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/abc083/tasks/abc083_b
// かんたん

int main() {
    int N,A,B; cin >> N >> A >> B;
    int ans=0;

    for (int i=1; i<=N; i++) {
        int sum = 0;
        for (char element : to_string(i)) {
            sum += int(element - '0');
        }
        if (A <= sum && sum <= B) ans += i;
    }

    cout << ans;

    return 0;
}
