#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// [ascii - C++, most efficient way to change uppercase to lowercase and vice versa without condition branching - Stack Overflow](https://stackoverflow.com/questions/42245397/c-most-efficient-way-to-change-uppercase-to-lowercase-and-vice-versa-without)
char switchCase(char c) {
    // This works because it flips the 6th digit of the binary representation of ASCII alphabets
    // Uppercase and lowercase alphabets in ASCII differ by 32 in their numerical values
    if((c>='a' && c<='z') | (c>='A' && c<='Z')) {
        return c ^ 32;
    }
    return c;
}

int main() {
    string letters;
    getline(cin, letters);

    rep(i, letters.size()) {
        letters[i] = switchCase(letters[i]);
    }

    cout << letters << endl;
    return 0;
}
