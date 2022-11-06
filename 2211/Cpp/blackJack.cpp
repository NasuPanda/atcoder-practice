#include <bits/stdc++.h>
using namespace std;

// 仕様参考
// [プログラミング入門者からの卒業試験は『ブラックジャック』を開発すべし - Qiita](https://qiita.com/hirossyi73/items/cf8648c31898216312e5)

// 定数
int MARKS_NUM = 4;
int NUMBERS_NUM = 13;
int INITIAL_CARDS_N = MARKS_NUM * NUMBERS_NUM;
vector<string> MARKS = {"ハート", "ダイヤ", "スペード", "クラブ"};

// カードクラス
class Card {
public:
  string mark;
  int number;
};

// カードを生成する関数
vector<Card> generate_card() {
  vector<Card> cards(INITIAL_CARDS_N);
  
  for (int m = 0; m < MARKS_NUM; m++) {
      for (int n = 0; n < NUMBERS_NUM; n++) {
          Card card;

          card.mark = MARKS.at(m);
          card.number = n + 1; // カード番号は +1 する

          // ex. 1 * 13 + 2 => 15 (ダイヤの2)
          cards.at(m * NUMBERS_NUM + n) = card;
      }
  }
  
  return cards;
}

// ランダムなカードを取得・元の配列から削除する
Card popRandomCard(vector<Card> &cards) {
    int randomIndex = rand()%cards.size();
    Card card = cards.at(randomIndex);
    // 削除
    cards.erase(std::cbegin(cards) + randomIndex);

    return card;
}

// 破壊的: プレイヤーが山札からカードを引き、カードの数字を返す
int drawPlayer(vector<Card> &cards) {
    Card card = popRandomCard(cards);
    cout << "あなたの引いたカードは" << card.mark << "の" << card.number << "です" << endl;
    return card.number;
}

// 破壊的: ディーラーが山札からカードを引き、カードの数字を返す
int drawDealer(vector<Card> &cards, bool isSecondDraw) {
    Card card = popRandomCard(cards);
    if (isSecondDraw) cout << "ディーラーの2枚目のカードは分かりません" << endl;
    else cout << "ディーラーの引いたカードは" << card.mark << "の" << card.number << "です" << endl;
    
    return card.number;
}

bool getIsDrawMoreCard() {
    cout << "カードを引きますか? 引く場合はyを、引かない場合はnを入力してください" << endl;
    char yesOrNo;
    cin >> yesOrNo;

    if (yesOrNo == 'y') return true;
    else if (yesOrNo == 'n') return false;
}

int main() {
  vector<Card> cards = generate_card();
  int playerScore = 0, dealerScore = 0;

  cout << "### ブラックジャックへようこそ ###" << endl;

  playerScore += drawPlayer(cards);
  playerScore += drawPlayer(cards);
  dealerScore += drawDealer(cards, false);
  dealerScore += drawDealer(cards, true);
  cout << "# # # # # # # # # #" << endl;
  
  // プレイヤーのターン
  while (true) {
      cout << "あなたの現在の得点は" << playerScore << "です" << endl;

      // 継続判定
      if (!(getIsDrawMoreCard())) {
          break;
      };

      playerScore += drawPlayer(cards);
      if (playerScore > 21) {
          cout << "バースト☠ あなたの負けです!" << endl;
          return 0;
      }
  }

  cout << "# # # # # # # # # #" << endl;
  
  // ディーラーのターン
  cout << "ディラーの現在の得点は" << dealerScore << "です" << endl;
  while (true) {
      // 継続判定
      if (!(dealerScore <= 17)) break;
      
      dealerScore += drawDealer(cards, false);
      cout << "ディラーの現在の得点は" << dealerScore << "です" << endl;
  }
  
  // 勝敗判定
  cout << "あなたの最終的な得点は" << playerScore << "です" << endl;
  cout << "ディーラーの最終的な得点は" << dealerScore << "です" << endl;
  
  bool isWin;
  if (dealerScore > 21) {isWin = true;}
  else if (playerScore > dealerScore) {isWin = true;}
  else {isWin = false;}
  
  if (isWin) cout << "あなたの勝ちです!" << endl;
  else cout << "あなたの負けです!" << endl;
}
