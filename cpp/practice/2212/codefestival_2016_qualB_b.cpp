#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
// すんなり解けた

// 順位が上から順に、
    // a: 国内の学生
    // 予選通過者が A+B 人に満たなければ通過出来る
    // b: 海外の学生
    // 予選通過者が A+B 人に満たない かつ 順位がB位以内なら通過出来る
    // c: どちらでもない
    // 通過できない

int main() {
    // N 人の参加者
    // A + B 人が通過出来る。Bは海外学生の順位の判定にも使われる。
    // 文字列Sにより参加者の属性が表される
    int N, A, B;
    string S;
    cin >> N >> A >> B;
    cin >> S;

    // 予選通過者の数
    int numQualifier = 0;
    // 順位を把握しておく必要があるので
    int currentRankInB = 1;

    for (auto attribute: S) {
        // デバッグ用
        // cout << attribute << "\t" << numQualifier << endl;

        // 参加者の属性を判定する
        switch(attribute) {
            case 'a':
                // 予選通過者が A+B 人に満たないなら通過
                if (numQualifier < A+B) {
                    cout << "Yes" << endl;
                    numQualifier++;
                } else {
                    cout << "No" << endl;
                }
                break;
            case 'b':
                // 予選通過者が A+B 人に満たない & 順位が海外選手の中でB位以内なら通過
                if (numQualifier < A+B && currentRankInB <= B) {
                    cout << "Yes" << endl;
                    numQualifier++;
                } else {
                    cout << "No" << endl;
                }
                // 順位を進める
                currentRankInB++;
                break;
            case 'c':
                cout << "No" << endl;
                break;
            default:
                cout << "ERROR!";
                break;
        }
    }
}
