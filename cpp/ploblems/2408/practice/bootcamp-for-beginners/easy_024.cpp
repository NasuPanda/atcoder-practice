#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int A,B,M; cin>>A>>B>>M;
    vector <int> a,b;
    int x[M],y[M],c[M];
    int tmp;
    rep(i,A) {cin>>tmp; a.push_back(tmp);}
    rep(i,B) {cin>>tmp; b.push_back(tmp);}
    rep(i,M) {
        cin>>x[i]>>y[i]>>c[i];
    }
    long long min_price=10e10;
    long long discounted_price;
    rep(i,M) {
        discounted_price = a[x[i]-1] + b[y[i]-1] - c[i];
        if (discounted_price < min_price) {
            min_price = discounted_price;
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long lowest_price_without_discount=a[0]+b[0];
    if (lowest_price_without_discount < min_price) {
        min_price = lowest_price_without_discount;
    }
    cout << min_price << endl;
    return 0;
}
