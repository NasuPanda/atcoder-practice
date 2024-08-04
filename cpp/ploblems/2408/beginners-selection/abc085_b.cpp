#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    vector<int> d(N); rep(i,N) {cin >> d[i];}

    sort(d.begin(), d.end());
    int count=1, prev_value=d[0];

    for(int i=1; i<N; i++) {
        if (d[i] != prev_value) {
            count++;
        }
        prev_value = d[i];
    }
    cout << count << endl;
    return 0;
}
