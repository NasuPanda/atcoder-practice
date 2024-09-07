#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int digitSum(int x) {
    int ans = 0;
    while (x >= 10) {
        ans += x % 10;
        x = floor(x/10);
    }
    ans += x;
    return ans;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int ans=0;
    for (int i=1; i<=N; ++i) {
        int sum = digitSum(i);
        if (A<=sum && sum<=B) {
            ans+=i;
        }
    }
    cout << ans;
    return 0;
}
