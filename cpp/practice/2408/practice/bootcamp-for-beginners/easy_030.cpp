#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2;
    int dx=x2-x1;
    int dy=y2-y1;
    x3=x2-dy;
    y3=y2+dx;
    x4=x3-dx;
    y4=y3-dy;
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    return 0;
}
