/* 切り捨てと切り上げ */
// 整数の場合: https://math.nakaken88.com/textbook/cp-round-down-and-round-up/
// 小数点以下の場合: ceil, floor
ceil() // 切り上げ
floor() // 切り捨て

/*絶対値*/
abs(-10);

/* べき乗 */
pow(x, y);
/* 平方根 */
sqrt(x);

/* 階乗(factorial) */


/* 順列 */
vector<int> nums(5);
iota(nums.begin(), nums.end(), 0); // 0~4のシーケンス生成
do {
    // 処理
} while (next_permutation(nums.begin(), nums.end()));

/* log */
log2(8) // 3
log10(1000) //3
log() // 自然数eを対数の底とする
