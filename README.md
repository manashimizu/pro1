> [!WARNING]
> Privateなメモです。裏取りはしていません。便宜上、表現も厳密ではありません。
補助教材に沿ったつもりですが、不備がありましたらお教えください。

## 関数
|関数|意味|ヘッダファイル|参考|
|:----|:----|:----|:----|
|printf()|出力|(stdio.h)|[001](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/001.c)|
|puts()|出力して末尾に改行|(stdio.h)|[002](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/002.c)|
|scanf()|入力|(stdio.h)|[005](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/005.c)|
|sqrt()|平方根|math.h|[020](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/020.c)|
|abs()|絶対値|stdlib.h|[021](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/021.c)|
|fabs()|実数の絶対値|math.h|[040](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/040.c)|

## ヘッダファイル
|ヘッダファイル|概要|参考|
|:----|:----|:----|
|stdio.h|入出力|[001](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/001.c)|
|math.h|数学|[020](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/020.c)|
|stdlib.h| 一般ユーティリティ|[021](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/021.c)|

## 型とか
|型|意味|書式指定子|参考|
|:----|:----|:----|:----|
|int|整数|%d|[003](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/003.c)|
|float|実数|%f|[004](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/004.c)|
|※|小数点以下x桁目まで|%.xf|[007](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/007.c)|
|void|空|-|[041](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/041.c)|

## 演算子
|演算子|意味|参考|
|:----|:----|:----|
|+|たす|[003](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/003.c)|
|-|ひく|[006](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/006.c)|
|*|かける|[004](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/004.c)|
|/|わる|[006](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/006.c)|
|%|あまり|[010](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/010.c)|
|=|代入|[003](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/003.c)|
|==|等しい|[014](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/014.c)|
|!=|等しくない|[017](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/017.c)|
|<|より小さい|[014](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/014.c)|
|>|より大きい|[009](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/009.c0)|
|>=|以下|[011](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/011.c)|
|<=|以上|[012](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/012.c)|
|++|1増やす||
|--|1減らす||
|&&|かつ|[011](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/011.c)|
|\|\||または|[009](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/009.c)|
|&|参照|[005](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/005.c)|
|\n|改行|[001](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/001.c)|

## 構文
### if文（ifelse文, elseif文）
参考：[009](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/009.c), [011](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/011.c)
```if.c
if (条件式) {
    処理
} else if (条件式) {
    処理
} else {
    処理
}
```

### switch-case文
参考：[024](https://github.com/manashimizu/proen/blob/a50d2e13d71bb576ca69b4a6a107473d95eb1d94/code/024.c)
```switch-case.c
switch(条件式) {
    case 値:
        処理
        break;
    default:
        処理
}
```