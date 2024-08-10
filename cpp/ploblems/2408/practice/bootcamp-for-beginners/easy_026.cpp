#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long H; cin>>H;
    if (H==1) {
        cout << 1;
        return 0;
    }
    long long count=0;
    long long number_of_attacks=0;
    long long number_of_monsters;
    while (true) {
        H = floor(H/2);
        count++;

        number_of_attacks+=pow(2, count-1);
        number_of_monsters=pow(2, count);

        if (H==1) {
            break;
        }
    }
    cout << number_of_attacks+number_of_monsters;
    return 0;
}
