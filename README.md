# ft_printf

標準ライブラリ関数 `printf` を再実装しました。

## インストール

```sh
make
```

これにより、`libftprintf.a` という静的ライブラリが生成されます。

## 使い方

1. `libftprintf.a` をコンパイル時にリンクします。
2. `ft_printf.h` をインクルードして使用します。

```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s!\n", "world");
    return (0);
}
```

コンパイル:

```sh
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o [my_program]
```

## 変換指定子

ft_printf は以下の変換指定子をサポートしています:
- `%c` - 文字
- `%s` - 文字列
- `%p` - ポインタアドレス
- `%d` - 整数（10進）
- `%i` - 整数（10進）
- `%u` - 符号なし整数（10進）
- `%x` - 16進数（小文字）
- `%X` - 16進数（大文字）
- `%%` - `%`リテラル

## フラグ

- ft_printf が可変引数を無制限に処理
- `-` - 左寄せ
- `0` - ゼロ埋め
- `.` - 精度指定
- `#` - 代替表記
- ` ` - 符号なし数値の前にスペースを追加
- `+` - 符号表示
- 幅指定子と精度指定子の組み合わせ対応
