#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int f(int n) {
    if (n%2==0) {
        return n/2;
    } else {
        return 3*n+1;
    }
}

bool in(vector<int> series, int a) {
    rep(i, series.size()) {
        if (series[i]==a) {
            return true;
        }
    }
    return false;
}

int main() {
    int s; cin>>s;
    vector<int> series;
    int a, a_prev=s, index=1;
    series.push_back(a_prev);

    while(true) {
        a = f(a_prev);
        index++;
        if (in(series, a)) {
            cout << index << endl;
            return 0;
        }
        series.push_back(a);
        a_prev = a;
    }
    return 0;
}
