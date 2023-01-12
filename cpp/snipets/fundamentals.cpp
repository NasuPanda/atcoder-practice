#include <bits/stdc++.h>
using namespace std;

/* データ型 */
void dataType() {
    /* 配列 */
    // 初期化: 要素数の指定をしておくと `.at` でアクセス出来るようになる
    vector<int> vec(10);

    // 2次元 : vector<vector<要素の型>> 変数名(1次元の要素数, vector<要素の型>(2次元の要素数, 初期値)) 初期値は省略可能
    vector<vector<int>> data(3, vector<int>(4)); // 3 × 4 の int型2次元配列
    vector<vector<int>> data(N);  // N×0 の配列(後から要素を追加するときなど)

    // 代入: 初期化時に代入することももちろん可能
    vec = {1,2,3};

    // 長さを求める
    vec.size();

    // 値の参照 (要素への参照を返すのでそのまま変更可能)
    vec.at(0); // [] は範囲外の場合エラーを返さないので非推奨

    // 値の削除
    vec.erase(cbegin(vec) + 1); // v.at(1) の要素を削除

    // 連番 シーケンス 生成
    vector<int> nums(5);
    iota(nums.begin(), nums.end(), 0); // 0~4のシーケンス生成

    // カウント
    int n_count = count(v.begin(), v.end(), 4);

    // 最後の要素を取得
    *rbegin(vec);


    /* ペア */
    pair<int, int> intPair;
    pair<int, char> intAndStrPair(1, '1');
    pair<int, char> pairByMakePair = make_pair(1, '1');
    intPair.first, intPair.second;


    /* tuple */
    // N個の値を持つデータ型。 2つの値のペアである pair も存在する
    tuple<int, string, bool> data(1, "hello", true);
    make_tuple(1, "hello", true); // 型宣言が不要なパターン
    // unpack
    int a; string s; bool f;
    tie(a, s, f) = data;
    // get: get<K> のKは定数でなければならない
    get<1>(data);

    /* map(辞書, 連想配列) */
    // 初期化: map<keyの型, valueの型> 変数名;
    map<string, int> score;
    score["alice"] = 100;
    // 値へのアクセスは `at` 推奨。
    // [] を使うと値が存在しない場合生成されてしまうため避けたほうが無難
    score.at("alice");
    // Keyの値が小さい順にループ (p は pair 型)
    for (auto p : vec) cout << p;

    /* キュー */
    // 初期化: queue<型> 変数名;

    // 優先度付きキュー(最も大きいものを取り出す処理が出来る) priority_queue<型> 変数名;
    // 小さい順の場合 priority_queue priority_queue<型, vector<型>, greater<型>> 変数名;
}

/* 操作系 */
void control() {
    vector<int> vec(10);
    /* ソート */
    sort(vec.begin(), vec.end());
    // ソート(降順): sort 後に reverse
    reverse(vec.begin(), vec.end());
    // ソート(降順)
    sort(vec.begin(), vec.end(), greater<int>());


    // pair のソート
    // .first の昇順でソートする

    // 構造体の属性を基準にしたソート: https://minus9d.hatenablog.com/entry/20130501/1367415668
    // 1. 構造体内で比較演算子を定義する
    // 2. 比較関数を定義する

    /* ループ */
    // 範囲for文: 配列の値全列挙
    vector<int> vec = {1, 3, 2, 5};
    for (int x : vec) cout << x << endl;
    for (auto x : vec) cout << x << endl; // auto を使うと型を明示する必要がなくなる

    /* switch case 文 */
    int num = 1;
    switch (num) {
      case 1:
        cout << "1";
        break;
      default:
        cout << "error";
        break;
    }

    /* 重複削除 */
    // uniqueは元の配列の長さに変更を加えないため、ゴミが残る。ゴミの末尾のポインタを返す。
    // そこで、予めソートしてからunique、eraseでゴミを削除する。
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}


/* 型関連 */
void Type(){
    /* auto */
    // 型定義の省略。初期化を伴って変数を宣言する場合や範囲for文で使える
    auto a = "hello";
    auto vec_copy = vec;
    for (auto elem: vec_copy) cout << elem << endl; // elem は int型

    /* キャスト */
    // string => int
    stoi("123"); // *char 型を渡す必要がある
    // char => int
    int('10' - '0'); // 9
    // int => string
    to_string(10);

    /* 型判定 */
    // 文字が数字かどうか
    isdigit('1');

    /* 型エイリアス */
    // ex: 多次元配列の宣言が簡単になる
    using vi = vector<int>;
    using vvi = vector<vi>;
    vvi data(10, vi(20)) // 10 * 20 の2次元配列
}

/* 文字列 */
{
  // アルファベットか判定
  isalpha();
  // 指定範囲の文字列を取りだす
  S.substr(開始位置, 取り出す長さ);
  // char ⇔ int
  int('a'), int('z'), char(97), char(122); // 97~122, a~z
}

/* ビット演算 */
{
    // https://atcoder.jp/contests/apg4b/tasks/APG4b_ac
    // 初期化: bitset<定数> [変数名](任意: 最初のビット列)
    bitset<4> b("1010");
    b[0] // 0 => つまり右から順

    // 用途例: 集合の操作
    // ある要素を含むなら対応するビットを1に、含まないなら0にすることで集合を表現することが出来る

    // 用途例: 高速化

    // 用途例: シフト演算単体で使う (2のN乗の値を得る)
    // 1を3ビット左シフトするとビット列は1000, つまり 2**3 になる。
    // 2**k の値を得たい時に 1<<k という書き方をすることがよくある。
    1 << 3
  }


/* 仕様 */
{
    /* 三項演算子 */
    true ? "trueのとき" : "falseのとき";

    /* 定数 */
    // タプル型へのアクセス, ビット演算などに使える
    const A = 10;

    /* 参照 */
    // とりあえず安全で制約の厳しいポインタだと思えばいい
    int &b = a; // b は a の参照
    for (int &x : a) x++ // 範囲for文で参照を使うと配列の値に変更を加えることが出来る

    /*マクロ*/
    // マクロ(define ディレクティブ)
    // 単純にプログラムを置換する性質上、大規模な開発では避けることが多い
    #define my_cout cout <<
    #define my_cout_with_arg(string) cout << string << endl;

    // 競プロでよく使われるマクロ
    #define all(v) v.begin(), v.end()
    #define rep(i, n) for (int i = 0; i < (int)(n); i++)

    /* ラムダ式 */
    // auto 関数名 = [](引数の型1 引数名1, 引数の型2, 引数名2, ...) { 関数の処理 };
    auto my_min = [](int a, int b) {
      if (a < b) { return a; }
      else { return b; }
    };
}
