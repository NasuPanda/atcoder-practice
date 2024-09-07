OUTDIR="bin"
# 入力された cpp のファイルをコンパイルし、実行可能ファイルを /bin 配下に出力する
mkdir -p $OUTDIR
#$1: cpp のファイル名
# FILENAME=`basename $1 .cpp`
# -o: 出力ファイル名
# -std: 使用するC++のバージョン
g++ $1 -o $OUTDIR/main.out -std=c++17
echo "Compile Successful!"
