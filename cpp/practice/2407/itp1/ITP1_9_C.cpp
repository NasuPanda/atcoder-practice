#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

char duel(string s, string competitor) {
    int number_of_loop;
    if (s.size() > competitor.size()) {
        number_of_loop = competitor.size();
    } else {
        number_of_loop = s.size();
    }

    rep(i, number_of_loop) {
        if (s[i] > competitor[i]) {
            return 'w';
        } else if (s[i] < competitor[i]) {
            return 'l';
        }
    }

    if (s.size() > competitor.size()) {
        return 'w';
    } else if (s.size() < competitor.size()) {
        return 'l';
    }
    return 'd';
}

int main() {
    int n, taro=0, hanako=0;
    string taro_card, hanako_card;
    char result;
    cin >> n;

    rep(i, n) {
        cin >> taro_card >> hanako_card;
        result = duel(taro_card, hanako_card);
        switch (result)
        {
        case 'w':
            taro+=3;
            break;
        case 'l':
            hanako+=3;
            break;
        case 'd':
            taro+=1; hanako+=1;
            break;
        }
    }

    cout << taro << " " << hanako << endl;
    return 0;
}
