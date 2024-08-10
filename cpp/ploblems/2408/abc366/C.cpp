#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {

        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else {
        // If the element is not
        // present in the vector
        cout << "-1" << endl;
        return -1;
    }
}

int main() {
    int Q; cin>>Q;
    int command,x,eraseIndex;
    vector<int> balls;

    rep(i,Q) {
        cin>>command;
        switch (command)
        {
            case 1:
                cin>>x;
                balls.push_back(x);
                break;
            case 2:
                cin>>x;
                eraseIndex=getIndex(balls, x);
                balls.erase(balls.begin() + eraseIndex);
                break;
            case 3:
                cout << unique(balls.begin(), balls.end()) - balls.begin() << endl;
                break;
            default:
                cout << "ERROR" << endl;
                return 1;
        }
        // for (auto e: balls) cout << e << " ";
        // cout << endl;
    }
    return 0;
}
