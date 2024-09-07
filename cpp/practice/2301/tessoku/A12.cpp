#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long N, K;
long long A[100009];

// 答えがx以下か判定し、Yesであればtrue、Noであればfalseを返す
bool check(long long x) {
    long long sum = 0;
    for (int i=1; i<=N; i++) sum+=x / A[i];
    if (sum >= K) return true;
    return false;
}

int main() {
    cin >> N >> K;
    for (int i=1; i<=N; i++) cin >> A[i];

    long long left=1, right=1000000000;
    while (left < right) {
        long long mid = (left + right) / 2;
        bool answer = check(mid);
        if (answer) right = mid;       // 答えがMid以下であることが分かる
        if (!(answer)) left = mid + 1; // 答えがMid+1以上であることが分かる
    }

    cout << left << endl;

	return 0;
}
