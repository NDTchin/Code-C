//
// Created by Acer on 27/09/2023.
//
#include<stdio.h>
int nhapdiem(){
//int main(){
    int tongcacmon=0;
    float tongdiem=0;
    char subject[50];
    char choice;
    float diem;
    do{
        printf("Nhap ten mon hoc: ");
        scanf("%s",subject);
        printf("Nhap diem: ");
        scanf("%f",&diem);
        tongdiem += diem;
        tongcacmon++;
        fflush(stdin);
        printf("Ban co muon tiep tuc hay khong? (Y/N): ");
        scanf(" %c",&choice);
    }while (choice == 'y'|| choice == 'Y');
    if (tongcacmon>0){
        double dtb = tongdiem / tongcacmon;
        printf("Diem trung binh cua ban la: %2f\n",dtb);
    }else{
        printf("Khong co mon nao duoc nhap diem.\n");
    }
    return 0;
}