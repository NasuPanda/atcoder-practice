#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,A,B; cin >> N >> A >> B;
    string S; cin >> S;
    int number_of_qualifiers=0, number_of_abroad_qualifiers=0;
    for (auto attribute: S) {
        switch (attribute)
        {
        case 'a':
            if(number_of_qualifiers<A+B) {
                number_of_qualifiers++;
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'b':
            if(number_of_qualifiers<A+B && number_of_abroad_qualifiers<B) {
                    number_of_qualifiers++;
                    number_of_abroad_qualifiers++;
                    cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'c':
            cout << "No" << endl;
            break;
        }
    }
    return 0;
}
