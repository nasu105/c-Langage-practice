#include<stdio.h>

int main(){
    int num;
    printf("1~3の数値を入力してください:");
    // キーボードから整数を入力
    scanf("%d", &num);
    //入力した値が、正の数かどうかを調べる
    switch (num)
    {
    case 1:
        printf("one\n"); //numが1だった時の処理
        break;
    case 2:
        printf("two\n"); //numが2だった時の処理
        break;
    case 3:
        printf("three\n"); // numが3だった時の処理
        break;
    default:
        printf("不適切な数値です。\n"); //それ以外の値が入力された時の処理
        break;
    }
}