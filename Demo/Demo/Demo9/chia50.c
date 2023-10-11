//
// Created by Acer on 09/10/2023.
//
#include<stdio.h>
//int chia50(){
int num(num1,num2);
//int main() {
    int num1, num2;
    printf("Nhap gia tri num1: ");
    scanf("%d", &num1);
    printf("Nhap gia tri num2: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("Cac so chia het cho 50 tu %d den %d la: \n", num1, num2);
        int(num1, num2);
}else{
        printf("Cac so chia het cho 50 tu %d den %d la: \n", num2, num1);
        int(num2, num1);
}
void num(int num1, int num2) {
        for (int num= num1; num<=num2; num++){
            if (num%50==0){
                printf("%d\n",num);
            }
        }
    }
}