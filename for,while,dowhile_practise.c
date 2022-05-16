#include <stdio.h>

int main() {
    int i, num;
    printf("回数を入力:");
    scanf("%d", &num); //キーボードからループの回数を入力
    // whileループで実行
    printf("whileで実行\n");
    i = 1;
    while (i <= num) {
        printf("*");
        i++;
    }
    printf("\n");
    // do~whileで実行
    printf("do~whileで実行");
    i = 1;
    do {
        printf("*");
        i++;
    } while (i <= num); {
        /* code */
        printf("\n");
    }
}