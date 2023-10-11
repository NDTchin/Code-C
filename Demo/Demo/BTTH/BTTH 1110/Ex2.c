//
// Created by Acer on 11/10/2023.
//
#include <stdio.h>
int main() {
    int Numbers[10];
    int i;
    printf("Input 10 Numbers\n==============\n");
    for ( i = 0; i < 10; i++) {
        printf(" Number %d: ", i + 1);
        scanf("%d", &Numbers[i]);
    }
    printf("Result: \n");
    for ( i = 9; i >= 0; i--) {
        printf("%d", Numbers[i]);
        if (i!=0) {
            printf(",");
        }
    }
    return 0;
}