/* int 型の配列から最小の値を返す */
int return_min(vector<int> vec) {
    // 適当な大きい値
    int minx = 2147483647;

    for (int i=0; i<vec.size(); i++) {
        minx = min(minx, vec.at(i));
    }
    return minx;
}

/* 最小値と最大値を取得する */
sort(vec.begin(), vec.end());
int minVec = vec[0], maxVec = vec[N-1];


/*対象の値が存在する場合そのインデックスを、存在しなければ-1を返す*/
int findIndex(vector<int> vec, int value) {
    rep(i, vec.size()) {
        if (vec.at(i) == value) {
            return i;
        }
    }
    return -1;
}
