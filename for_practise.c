#include<stdio.h>

/* int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d", i);
    }
    printf("\n");
} */

int main() {
    int i, j;
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d+%d=%d ", i, j, i + j);
        }
        printf("\n");
    }
}