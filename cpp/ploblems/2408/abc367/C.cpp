#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    int numberOfA = 1;
    for (auto &r : R) {
        cin >> r;
        numberOfA *= r;
        }
    vector<vector<int>> A(numberOfA);

    for (int i=0; i<R.size(); ++i) {
        int r = R[i];

        if (r == 1) {
            rep(j, numberOfA) {
                A[j].push_back(1);
            }
        }
        else if (i == 0) {
            int index=0;
            for(int j=1; j<=r; ++j) {
                rep(k, numberOfA/r) {
                    A[index].push_back(j);
                    index++;
                }
            }
        }
        // else if (i == R.size() - 1)
        else
        {
            int index=0;
            rep(j, numberOfA/r) {
                for (int k=1; k<=r; ++k) {
                    A[index].push_back(k);
                    index++;
                }
            }
        }
        // else
        // {
        //     int index=0;
        //     for(int j=1; j<=r; ++j) {
        //         rep(k, numberOfA/r) {
        //             A[index].push_back(j);
        //             index++;
        //         }
        //     }
        // }
    }

    int count = 0;
    for (auto a : A) {
        for (auto x : a) {
            count+=x;
            cout << x << " "; // DEBUG
        }

        cout << ", Count: " << count << endl; // DEBUG

        // if (count % K == 0) {
        //     for (auto x : a) {
        //         cout << x << " ";
        //     }
        //     cout << endl;
        // }
        count = 0;
    }
    return 0;
}
