//
// Created by Acer on 04/10/2023.
//
#include<stdio.h>
int timso(){
//int main(){
    int i,n;
    int A[n];
    printf("Nhap tong so phan tu co trong mang: ");
    scanf("%d",&n);
//Nhap cac phan tu trong mang
    for(i=0;i<n;i++) {
        printf("\nNhap phan tu cua mang %d: ", i + 1);
        scanf("%d", &A[i]);
    }
//Tim phan tu chan
    for( i = 0; i<n ; i++) {
        if (A[i] % 2 == 0)
            printf("Cac so chan le trong mang phan tu: %d.", A[i]);
    }
}