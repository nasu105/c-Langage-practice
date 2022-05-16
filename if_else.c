#include <stdio.h>

int main() {
    int a;
    printf("数値を入力:");
    // キーボードから数値を入力
    scanf("%d", &a);
    if (a > 0) {
        printf("入力した値は、正の数です。\n"); //正の数だった場合に実行
    } else {
        printf("入力した値は、正の数ではありません。\n"); //0か、負の数だった場合に実行
    }
}