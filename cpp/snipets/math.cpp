#数学的操作類

/* 切り捨てと切り上げ */
// 整数の場合: https://math.nakaken88.com/textbook/cp-round-down-and-round-up/
// 小数の場合
ceil() // 切り上げ
floor() // 切り捨て


/* 最小値,最大値 */
// 例 1: 103, 168, 103 の中で最も大きい値を出力する : 168 が出力される
cout << max({103, 168, 103}) << endl;

// 例 2: {c[1], c[2], ..., c[N]} の最小値を出力する方法 1
int N, c[100009], minx = 2147483647;
cin >> N;
for (int i = 1; i <= N; i++) cin >> c[i];
for (int i = 1; i <= N; i++) minx = min(minx, c[i]);
cout << minx << endl;

// 例 3: {c[1], c[2], ..., c[N]} の最小値を出力する方法 2
cout << *min_element(c + 1, c + N + 1) << endl;


/* 平方根,べき乗 */
pow(x, y);
sqrt(x);


/* 階乗(factorial) */
