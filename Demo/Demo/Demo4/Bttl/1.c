//
// Created by Acer on 24/09/2023.
//
#include<stdio.h>
//int 1(){
int main(){
    float M1,M2,M3;
    //Nhap vao diem cua 3 mon hoc
    do {
        printf("Nhap vao diem M1: ");
        scanf("%f", &M1);
    }while (M1<0 || M1>=100);
    do {
        printf("Nhap vao diem M2: ");
        scanf("%f", &M2);
    }while (M2<0 || M2>=100);
    do {
        printf("Nhap vao diem M3: ");
        scanf("%f", &M3);
    }while (M3<0 || M3>=100);
    float dtb=(M1+M2+M3)/3;
    printf("Diem trung binh:%.2f", dtb);
    if (dtb >= 90) {
        printf("Xep loai: E+\n");
    } else if (dtb >= 80 && dtb < 90) {
        printf("Xep loai: E\n");
    } else if (dtb >= 70 && dtb < 80) {
        printf("Xep loai: A+\n");
    } else if (dtb >= 60 && dtb < 70) {
        printf("Xep loai: A\n");
    } else if (dtb >= 50 && dtb < 60) {
        printf("Xep loai: B+\n");
    } else if (dtb < 50) {
        printf("ROT \n");
    }
    return 0;
}