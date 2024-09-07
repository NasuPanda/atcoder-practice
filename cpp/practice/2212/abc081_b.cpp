    #include <bits/stdc++.h>
    using namespace std;
    #define rep(i, n) for (int i = 0; i < (int)(n); i++)

    // https://atcoder.jp/contests/abc081/tasks/abc081_b
    // アルゴリズム別に関係ない、ループの扱いで苦戦した

    bool isOdd(int n) {
        return bool(n & 1);
    }

    int main() {
        int N;
        cin >> N;
        vector<int> A(N);
        rep(i, N) {
            int tmp;
            cin >> tmp;

            // 奇数が含まれていたら
            if(isOdd(tmp)){
                cout << 0;
                return 0;
            }
            A.at(i) = tmp;
        };

        int ans=0;
        bool loop = true;
        while(true) {
            rep(i, N) {
                int a = A.at(i);
                a /= 2;
                // 奇数
                if (isOdd(a)) loop = false;
                A.at(i) = a;
            }
            ans++;
            if(!loop) break;
        }

        cout << ans;
        return 0;
    }
