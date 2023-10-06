//
// Created by Acer on 06/10/2023.
//
#include<stdio.h>
//int nhap2so(){
int thuchienpheptinh(int num1, int num2, char pheptinh);
int main() {
    //Nguoi dung nhap gia tri
    int num1, num2;
    char pheptinh;
    printf("\nNhap so hang thu nhat: ");
    scanf("%d", &num1);
    printf("\nNhap so hang thu hai: ");
    scanf("%d", &num2);
    printf("\n Thuc hien tinh (+,-,*,/): ");
    scanf(" %c", &pheptinh);

    int result1 = thuchienpheptinh(num1, num2, pheptinh);
    printf("Result: %d\n", result1);

    return 0;
}
int thuchienpheptinh(int num1, int num2, char pheptinh){
        int result;
        switch (pheptinh) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                printf("Ko\n");
                result = 0;
        }return result;
    }

