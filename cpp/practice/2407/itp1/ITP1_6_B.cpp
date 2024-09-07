#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int> replace_a_value_with_zero(vector<int> vec, int value) {
    rep(i, 13) {
        if (vec[i] == value) {
            vec[i] = 0;
            return vec;
        }
    }
    return vec;
}

void print_missing_cards(vector<int> vec, char suit) {
    rep(i, 13) {
        if (vec[i] != 0) {
            cout << suit << " " << vec[i] << endl;
        }
    }
}

int main() {
    vector<int> spades{1,2,3,4,5,6,7,8,9,10,11,12,13},
    hearts{1,2,3,4,5,6,7,8,9,10,11,12,13},
    clubs{1,2,3,4,5,6,7,8,9,10,11,12,13},
    diamonds{1,2,3,4,5,6,7,8,9,10,11,12,13};

    int n;
    cin >> n;

    char suit;
    int rank;
    rep(i, n) {
        cin >> suit >> rank;
        if (suit == 'S') {
            spades = replace_a_value_with_zero(spades, rank);
        } else if (suit == 'H') {
            hearts = replace_a_value_with_zero(hearts, rank);
        } else if (suit == 'C') {
            clubs = replace_a_value_with_zero(clubs, rank);
        } else {
            diamonds = replace_a_value_with_zero(diamonds, rank);
        }
    }

    print_missing_cards(spades, 'S');
    print_missing_cards(hearts, 'H');
    print_missing_cards(clubs, 'C');
    print_missing_cards(diamonds, 'D');

    cout << endl;
    return 0;
}
