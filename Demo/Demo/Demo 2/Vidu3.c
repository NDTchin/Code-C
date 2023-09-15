//
// Created by Acer on 15/09/2023.
//
#include <stdio.h>
int a*(b+c/d)()
//int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    //Nhập giá trị
    printf("Nhap gia tri cho a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cho b: ");
    scanf("%d", &b);
    printf("Nhap gia tri cho c: ");
    scanf("%d", &c);
    printf("Nhap gia tri cho d: ");
    scanf("%d", &d);
    //Tính giá trị
    int result = a*(b+c/d) - 22;
    //In kết quả ra màn hình
    printf("Ket qua: %d\n", result);
}