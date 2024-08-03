#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N; cin >> N;
    string S; cin >> S;
    char ROCK='R', SCISSORS='S', PAPER='P';

    map<char, char> win, draw, lose;
    win[ROCK]=PAPER; win[SCISSORS]=ROCK; win[PAPER]=SCISSORS;
    draw[ROCK]=ROCK; draw[SCISSORS]=SCISSORS; draw[PAPER]=PAPER;
    // lose[ROCK]=SCISSORS; lose[SCISSORS]=PAPER; lose[PAPER]=ROCK;

    int count=1; // Win once (already!)
    char prev_hand=win[S[0]], opponent_hand, win_hand;

    for(int i=1; i<N; i++) {
        opponent_hand = S[i];
        win_hand = win[opponent_hand];

        // cout << "Prev hand: " << prev_hand << " Opponent_hand: " << opponent_hand << endl;
        if (win_hand != prev_hand) {
            // win
            count++;
            prev_hand = win_hand;

            // cout << "WIN! Count is: " << count << endl;
        } else {
            // draw
            prev_hand = draw[opponent_hand];
            // cout << "DRAW!" << endl;
        }
    }

    cout << count << endl;
    return 0;
}
