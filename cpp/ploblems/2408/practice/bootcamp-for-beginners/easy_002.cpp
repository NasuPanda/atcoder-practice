#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    int X[N]; rep(i,N) {cin >> X[i];}

    long long minimum_stamina_consumption=10e9, stamina_consumption=0;

    for(int p=1; p<=100; p++) {
        rep(i,N) {
            stamina_consumption+=pow((p-X[i]),2);
        }
        if (stamina_consumption<=minimum_stamina_consumption) {
            minimum_stamina_consumption=stamina_consumption;
        }
        stamina_consumption=0;
    }
    cout << minimum_stamina_consumption << endl;
    return 0;
}
