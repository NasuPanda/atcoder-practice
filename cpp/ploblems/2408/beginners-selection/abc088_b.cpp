#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int get_max_index(vector<int> vec) {
    int tmp=-1, max_index=0;
    rep(i,vec.size()) {
        if (vec[i] > tmp) {
            tmp = vec[i];
            max_index=i;
        }
    }
    return max_index;
}

int main() {
    int N; cin >> N;
    int tmp; vector<int> a; rep(i,N) {
        cin >> tmp; a.push_back(tmp);
    }

    int alice=0, bob=0, max_index;
    rep(i,N) {
        max_index=get_max_index(a);
        if (i%2==0) {
            alice+=a[max_index];
        } else {
            bob+=a[max_index];
        }
        a[max_index]=-1;
    }
    cout << alice-bob << endl;
    return 0;
}
