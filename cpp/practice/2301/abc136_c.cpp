#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 単調非現象なので、大きくなっていくようにすれば良い。
// マイナスの操作しか出来ないため、後ろから操作した方がいい (書いてみると分かるが、前からの場合、i+1 と i+2 まで見ないといけない)

int main() {
    int N; cin >> N;
    int H[N]; rep(i,N) cin >> H[i];

    for (int i=N-2; i>0; i--) {
        if (H[i] > H[i+1]+1) {
            cout << "No";
            return 0;
        }
        else if (H[i] == H[i+1]+1) H[i]--;
    }

    cout << "Yes";
	return 0;
}
