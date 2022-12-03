#include <bits/stdc++.h>
using namespace std;

int main() {
  /* 配列 */
  // https://atcoder.jp/contests/apg4b/tasks/APG4b_n
  // 初期化: 要素数の指定は必須
  vector<int> vec(N);
  // 2次元 : vector<vector<要素の型>> 変数名(1次元の要素数, vector<要素の型>(2次元の要素数, 初期値)) 初期値は省略可能
  vector<vector<int>> data(3, vector<int>(4)); // 3 × 4 の int型2次元配列
  vector<vector<int>> data(N);  // N×0 の配列(後から要素を追加するときなど)
  // 代入: 初期化時に代入することももちろん可能
  vec = {1,2,3};
  // 長さを求める
  vec.size()
  // ソート(昇順)
  sort(vec.begin(), vec.end());
  // ソート(降順): sort => reverse
  reverse(vec.begin(), vec.end());

  // 範囲for文
  vector<int> a = {1, 3, 2, 5};
  for (int x : a) {
    cout << x << endl;
  }


  // 参照(とりあえず安全で制約の厳しいポインタだと思えばいい)
  int a = 3;
  int &b = a; // b は a の参照
  // 範囲for文での参照 : for (int &x : a)

  // tuple (2つの値のペアである pair も存在する)
  tuple<int, string, bool> data(1, "hello", true);
  data = make_tuple(1, "hello", true);
  // tuple の unpack
  int a;
  string s;
  bool f;
  tie(a, s, f) = data;
  // アクセス <K> は定数でなければならない
  get<1>(data);

  // auto 初期化を伴って変数を宣言する場合や範囲for文において、autoと書くことで型の定義を省略出来る
  auto a = "hello"; // string型
  vector<int> vec = {1, 2, 3};
  auto vec_copy = vector; // vector<int>型
  for (auto elem: vec_copy) cout << elem << endl; // elem は int型

  // 型エイリアス
  using vi = vector<int>;
  using vvi = vector<vi>; // 簡単に多次元配列を書ける
  vvi data = (10, vi(20)) // 10 * 20 の2次元配列

  // map(辞書/連想配列): map<Keyの型, Valueの型> 変数名;
  map<string, int> score;
  score["alice"] = 100;
  // アクセスに [] を使うと値が存在しない場合生成されてしまうため避けたほうがいい
  score.at("alice"); // 100
  // Keyの値が小さい順にループ p は pair 型
  for (auto p : 変数名)

  // queue: queue<型> 変数名;

  // 優先度付きキュー(最も大きいものを取り出す処理が出来る) priority_queue<型> 変数名;
  // 小さい順 priority_queue priority_queue<型, vector<型>, greater<型>> 変数名;


  // ビット演算: https://atcoder.jp/contests/apg4b/tasks/APG4b_ac
  // bitset<定数> [変数名](任意: 最初のビット列)
  // 定数には const 修飾子で定義した値が使える
  bitset<4> b("1010");
  // 用途例: 集合の操作
  // ある要素を含むなら対応するビットを1に、含まないなら0にすることで集合を表現することが出来る
  // 用途例: 高速化
  // 用途例: シフト演算単体で使う
  1 << 3
  // 1を3ビット左シフトするとビット列は1000, つまり 2**3 になる。
  // 2**k の値を得たい時に 1<<k という書き方をすることがよくある。


  /*マクロ*/
  // マクロ(define ディレクティブ)
  // 単純にプログラムを置換する性質上、大規模な開発では避けることが多い
  #define my_cout cout <<
  my_cout "Hello";
  #define my_cout_with_arg(string) cout << string << endl;

  // 競プロでよく使われるマクロ
  #define all(v) v.begin(), v.end()
  #define rep(i, n) for (int i = 0; i < (int)(n); i++)

  /*ラムダ式*/
  // auto 関数名 = [](引数の型1 引数名1, 引数の型2, 引数名2, ...) { 関数の処理 };
  auto my_min = [](int a, int b) {
    if (a < b) { return a; }
    else { return b; }
  };

  // 順列の全列挙P
  // next_permutation を使う
}
