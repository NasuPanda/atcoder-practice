#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string shuffle(string deck, int h) {
    string shuffled, tmp;
    rep(i, h) {shuffled.push_back(deck[i]);}
    rep(i, deck.size() - h) {tmp.push_back(deck[i+h]);}
    rep(i, tmp.size()) {deck[i] = tmp[i];}
    rep(i, h) {deck[tmp.size()+i] = shuffled[i];}
    return deck;
}

int main() {
    string deck;
    int m, h;
    while(true) {
        cin >> deck;
        if (deck[0] == '-') {
            break;
        }
        cin >> m;
        rep(i, m) {
            cin >> h;
            deck = shuffle(deck, h);
        }
        cout << deck << endl;
    }
    return 0;
}
