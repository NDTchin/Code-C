//
// Created by Acer on 20/09/2023.
//
#include<stdio.h>
int toantu2(){
//int main(){
    int a=5;
    int b=10;
    int c= 7;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    // Tong hop tat ca cac loai toan tu
    printf(" bieu thuc vi du la: a+b >c && a !=b\n");
    printf("ket qu bieu thuc (%d +%d > %d && !=%d)\n", a,b,c,a,b);
    int ketqua=a+b > c&& a!=b;
    printf("Ket qua: %d\n", ketqua);

    printf("Bieu thuc vi du la:a+b>c ||a!=b\n");
    printf("ket qu bieu thuc (%d +%d > %d || !=%d)\n", a,b,c,a,b);
    int ketqua2=a+b > c|| a!=b;
    printf("Ket qua: %d\n", ketqua2);
    return 0;
}