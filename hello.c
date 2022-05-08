#include <stdio.h>

/* int main()
{
    printf("こんにちは。私の名前は%sです。\n年齢は%dです。\n" ,"nasu togo", 20);
    printf("イニシャルは、%cです。\n", 'Y');
    printf("%f + %f = %f\n",1.2 ,2.7 , 1.2 + 2.7);
} */

/* 演算子を用いた計算のプログラム */
int main(){
    // 各種演算
    printf("%d + %d = %d\n" ,5 ,2 ,5 + 2);   //足し算
    printf("%d - %d = %d\n" ,5 ,2 ,5 - 2);   //引き算
    printf("%d * %d = %d\n" ,5 ,2 ,5 * 2);   //掛け算
    printf("%d / %d = %d 余り %d\n" ,5 ,2 ,5 / 2 ,5 % 2);
}