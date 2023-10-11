//
// Created by Acer on 09/10/2023.
//
#include<stdio.h>
//int dongia(){
int tongtien(int donhang, int gia);
//int main(){
    int donhang, gia;
    printf("So luong don hang: \n");
    scanf("%d",&donhang);
    printf("Don gia: \n");
    scanf("%d",&gia );
    int tong= tongtien(donhang,gia);
            printf("Tong tien: %d",tong);
}
int tongtien(int donhang, int gia){
    int tong = donhang * gia;
    if(tong<100){
        tong=tong + tong*0.1;
        printf("Tong gia phai tra kem thue: $%f ", tong);
    }else if(tong>=100 ){
        tong= tong * 0.98;
        printf("Tong gia phai tra: $%f",tong);
    }else if(tong>=200){
        tong= tong * 0.95;
        printf("Tong gia phai tra: $%f",tong);
    }
    return 0 ;
}