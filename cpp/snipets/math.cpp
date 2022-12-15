/* 切り捨てと切り上げ */
{
    // 小数点以下
    ceil() // 切り上げ
    floor() // 切り捨て

    // 整数: https://math.nakaken88.com/textbook/cp-round-down-and-round-up/
    // 切り上げ操作
    123 / 10.0; // 12.3
    ceil(12.3)  // 13
    13 * 10     // 130
}

/* 整数か判定 */
{
    1.2 == int(1.2) // false
    1.0 == int(1.0) // true
}

/* 位操作 */
{
    // 1の位の値だけ取得
    12 % 10;         // 2桁の場合
    112 % 100 % 10;  // 3桁の場合
}

/*絶対値*/
{
    abs(-10);
}

/* べき乗, 平方根 */
{
    // べき乗
    pow(x, y);

    // 平方根
    sqrt(x);
}

/* 階乗(factorial) */


/* 順列 */
{
    vector<int> nums(5);
    iota(nums.begin(), nums.end(), 0); // 0~4のシーケンス生成
    do {
        // 処理
    } while (next_permutation(nums.begin(), nums.end()));
}

/* log */
{
    log() // 自然数eを対数の底とする
    log2(8) // 3
    log10(1000) //3
}
