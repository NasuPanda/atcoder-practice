# メモ

## 連番フォルダとファイルを生成したコマンド

```bash
for i in {1..10}; do for alpha in {A..D}; do mkdir $i; touch $i/$i-$alpha.py; done; done
```
