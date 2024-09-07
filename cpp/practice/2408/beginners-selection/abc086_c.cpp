#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_trip_plausible(int start_x, int start_y, int dest_x, int dest_y, int given_time) {
    int travel_time_x = abs(dest_x - start_x), travel_time_y = abs(dest_y - start_y);

    // Do we have enough time?
    if (travel_time_x + travel_time_y <= given_time) {
        // Can we land the destination exactly when we want?
        if((given_time - travel_time_x - travel_time_y) % 2 == 0) {
            return true;
        } else {
            return false;
        }
    }
    return false;
}

int main() {
    int N; cin >> N;
    int t[N],x[N],y[N]; rep(i,N) {cin >> t[i] >> x[i] >> y[i];}

    int current_x=0,current_y=0, current_t=0;

    rep(i,N) {
        if (!is_trip_plausible(current_x, current_y, x[i], y[i], t[i]-current_t)) {
            cout << "No" << endl;
            return 0;
        }

        current_x=x[i];
        current_y=y[i];
        current_t=t[i];
    }

    cout << "Yes" << endl;
    return 0;
}
