#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int sum_of_digits(int n) {
    /*
    E.g, n=113
    1st loop:
        n%10=3
        n/10=11(...3, but it'll be ignored)
        n becomes 11
    2nd loop:
        n%10=1
        n/10=1
        n becomes 1
    3rd loop:
        0<=n<=9 is true, and thus, the loop ends
    */


    int sum=0;
    while(true) {
        if(0<=n && n<=9) {
            sum += n;
            break;
        }
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n,a,b; cin >> n >> a >> b;
    int sum=0,tmp;
    for(int i=0; i<=n; i++) {
        tmp=sum_of_digits(i);
        if(tmp>=a && tmp<=b) {sum+=i;}
    }
    cout << sum << endl;
    return 0;
}
