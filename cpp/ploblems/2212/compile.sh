# 入力された cpp のファイルをコンパイルし、実行可能ファイルを /bin 配下に出力する
#$1: cpp のファイル名
FILENAME=`basename $1 .cpp`
g++ $1 -o bin/$FILENAME -std=c++17
